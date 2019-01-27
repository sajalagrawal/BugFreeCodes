//https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix/0
//https://www.geeksforgeeks.org/maximum-size-sub-matrix-with-all-1s-in-a-binary-matrix/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int main() {
	int t,n,m,i,j;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    int g[n][m];
	    int dp[n][m]={0},ans=1; //minimum answer is always 1
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cin>>g[i][j];
	            dp[i][j]=g[i][j];
	        }
	    }
	    
	    for(i=1;i<n;i++){
	        for(j=1;j<m;j++){
	            if(g[i][j]==1 and g[i-1][j-1]==1 and g[i-1][j]==1 and g[i][j-1]==1){
	                dp[i][j]=min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
	                ans=max(ans,dp[i][j]);
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
