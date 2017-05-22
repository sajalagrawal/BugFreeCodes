//http://www.spoj.com/problems/BYTESM2/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,m,n,i,j;
    cin>>t;
    while(t--){
        cin>>m>>n;
        int a[m][n+2];
        for(i=0;i<m;i++)a[i][0]=a[i][n+1]=0;
        for(i=0;i<m;i++){
            for(j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        for(i=m-2;i>=0;i--){
            for(j=1;j<=n;j++){
                a[i][j]+=max(a[i+1][j+1],max(a[i+1][j],a[i+1][j-1]));
            }
        }
        int maxx=a[0][1];
        for(i=2;i<=n;i++){
            if(a[0][i]>maxx)maxx=a[0][i];
        }
        cout<<maxx<<"\n";
    }
	return 0;
}
