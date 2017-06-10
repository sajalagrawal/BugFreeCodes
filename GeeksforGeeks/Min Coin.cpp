//http://practice.geeksforgeeks.org/problems/min-coin/0
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t,n,amt,i,j;
    cin>>t;
    while(t--){
        cin>>n>>amt;
        int a[n],dp[amt+1];
        dp[0]=0;
        for(i=1;i<=amt;i++)dp[i]=99999999;
        
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++){
            for(j=0;j<=amt;j++){
                if(j>=a[i])dp[j]=min(dp[j],1+dp[j-a[i]]);
            }
        }
        
        if(dp[amt]<99999999)cout<<dp[amt]<<"\n";
        else cout<<"-1\n";
    }
	return 0;
}