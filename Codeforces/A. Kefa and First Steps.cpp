//http://codeforces.com/contest/580/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,ans=1,i;
    cin>>n;
    int a[n],dp[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        dp[i]=1;
    }
    for(i=1;i<n;i++){
        if(a[i]>=a[i-1]){
            dp[i]=dp[i-1]+1;
            ans=max(ans,dp[i]);
        }
    }
    cout<<ans<<"\n";
	return 0;
}
