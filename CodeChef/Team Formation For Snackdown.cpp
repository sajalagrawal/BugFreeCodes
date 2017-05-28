//https://www.codechef.com/SNCKPA17/problems/TEAMFORM/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    int t,n,m,j,k,i;
    cin>>t;
    while(t--){
        cin>>n>>m;
        //cout<<"n="<<n<<"m="<<m<<endl;
        int a[n+1];
        memset(a,0,sizeof a);
        while(m--){
            cin>>j>>k;
            a[j]++;
            a[k]++;
        }
        int flag=0;
        if(n%2==1){
            cout<<"no\n";
            flag=1;
        }else{
            for(i=1;i<=n;i++){
                if(a[i]>1){
                    cout<<"no\n";
                    flag=1;
                    break;
                }
            }
        }
        if(!flag)cout<<"yes\n";
    }
	return 0;
}
 
Comments 
