//http://www.spoj.com/problems/COINS/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

//Top Down approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

map<ll,ll> dp;
ll solve(ll n){
        if(n<=1)return dp[n];
        else if(dp[n]!=0)return dp[n];
        dp[n]=(max(n,(solve(n/2)+solve(n/3)+solve(n/4))));
        return dp[n];
}
int main() {
    ll n,i;
    dp[0]=0,dp[1]=1;
    while(scanf("%lld", &n) != EOF){
        solve(n);
        cout<<dp[n]<<"\n";
    }
	return 0;
}
