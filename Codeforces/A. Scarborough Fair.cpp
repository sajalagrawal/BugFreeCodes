//http://codeforces.com/contest/897/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,m,l,r,i;
    char a,b;
    cin>>n>>m;
    string str;
    cin>>str;
    str=' '+str;
    //cout<<"Str="<<str<<endl;
    while(m--){
        cin>>l>>r>>a>>b;
        for(i=l;i<=r;i++){
            if(str[i]==a){
                //cout<<"i="<<i<<endl;
                str[i]=b;
            }
        }
    }
    str=str.substr(1);
    cout<<str<<"\n";
	return 0;
}