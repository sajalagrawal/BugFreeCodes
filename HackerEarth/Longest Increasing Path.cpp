//https://www.hackerearth.com/practice/algorithms/dynamic-programming/2-dimensional/practice-problems/algorithm/longest-increasing-path-9/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
ll max(ll a,ll b){
    return a>b?a:b;
}
int main() {
	ll t,n,m,i,j;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    int a[n][m];
	    int dp[n][m];
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cin>>a[i][j];
	            dp[i][j]=1;
	        }
	    }
	    for(i=n-1;i>=0;i--){
	        for(j=m-1;j>=0;j--){
	            if(i==n-1 and j==m-1)dp[i][j]=1;
	            if(i==n-1 and j<m-1 and a[i][j]<a[i][j+1])dp[i][j]=dp[i][j+1]+1;
	            if(j==m-1 and i<n-1 and a[i][j]<a[i+1][j])dp[i][j]=dp[i+1][j]+1;
	            
	            if(i<n-1 and j<m-1 and a[i][j]<a[i+1][j] and a[i][j]<a[i][j+1])
	                dp[i][j]=max(dp[i+1][j],dp[i][j+1])+1;
	            else if(i<n-1 and j<m-1 and a[i][j]<a[i+1][j])dp[i][j]=dp[i+1][j]+1;
	            else if(i<n-1 and j<m-1 and a[i][j]<a[i][j+1])dp[i][j]=dp[i][j+1]+1;
	        }
	    }
	    /*for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cout<<dp[i][j]<<" ";
	        }
	        cout<<endl;
	    }*/
	    cout<<dp[0][0]<<endl;
	}
	return 0;
}
