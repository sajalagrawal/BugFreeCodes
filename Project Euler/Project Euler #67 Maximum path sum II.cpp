//https://www.hackerrank.com/contests/projecteuler/challenges/euler018
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n][n+1];
        memset(a,0,sizeof a);
        for(i=0;i<n;i++){
            for(j=1;j<=i+1;j++){
                cin>>a[i][j];
            }
        }
        /*for(i=0;i<n;i++){
            for(j=0;j<=n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }*/
        for(i=1;i<=n-1;i++){
            for(j=1;j<=n;j++){
                a[i][j]+=max(a[i-1][j-1],a[i-1][j]);
            }
        }
        ll  maxx=a[n-1][0];
        for(i=1;i<=n;i++){
            if(a[n-1][i]>maxx)maxx=a[n-1][i];
        }
        /*for(i=0;i<n;i++){
            for(j=0;j<=n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }*/
        cout<<maxx<<endl;
    }
	return 0;
}
