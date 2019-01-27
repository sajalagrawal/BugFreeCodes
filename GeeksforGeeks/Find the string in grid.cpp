//https://practice.geeksforgeeks.org/problems/find-the-string-in-grid/0
//https://www.geeksforgeeks.org/search-a-word-in-a-2d-grid-of-characters/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
char g[105][105];
int flag=0;
int x[]={-1,0,1,-1,1,-1,0,1}; //j
int y[]={-1,-1,-1,0,0,1,1,1}; //i
void search(ll n,ll m,ll i,ll j, string s){ //n=row, m=col
    if(g[i][j]!=s[0])return;
    int k=0,l;
    for(k=0;k<8;k++){ //k=all directions
        int r=i+y[k];
        int c=j+x[k];
        for(l=1;l<s.size();l++){ //l= string index
            if(r<0 or r>=n or c<0 or c>=m)break;
            if(g[r][c]!=s[l])break;
            r+=y[k];
            c+=x[k];
        }
        if(l==s.size()){
            cout<<i<<" "<<j<<", ";
            flag=1;
            return; //only one output for each i,j
        }
    }
    return;
}
void solve(ll n,ll m,string s){
    ll i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            search(n,m,i,j,s);
        }
    }
}
int main() {
	ll t;
	cin>>t;
	while(t--){
	    flag=0;
	    ll n,m,i,j;
	    cin>>n>>m;
	    //char g[n][m];
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cin>>g[i][j];
	        }
	    }
	    string str;
	    cin>>str;
	    solve(n,m,str);
	    if(flag==0)cout<<"-1";
	    cout<<endl;
	}
	return 0;
}
