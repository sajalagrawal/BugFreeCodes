//https://www.codechef.com/problems/SUMTRIAN
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,i,j;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n][n+1];
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                scanf("%d",&a[i][j]);
            }
            for(;j<=n;j++)a[i][j]=0;
        }
        for(i=n-2;i>=0;i--){
            for(j=0;j<n;j++){
                a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
            }
        }
        /*for(i=0;i<n;i++){
            for(j=0;j<=n;j++)cout<<a[i][j]<<" ";
            cout<<endl;
        }*/
        int ans=INT_MIN;
        for(i=0;i<n;i++){
            ans=max(ans,a[0][i]);
        }
        printf("%d\n",ans);
    }
    
	return 0;
}
