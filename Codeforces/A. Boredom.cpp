//http://codeforces.com/problemset/problem/455/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll dp[100005]={0};
    ll n,i,k,maxi=0;
    cin>>n;
    ll count[100005]={0};
    for(i=0;i<n;i++){
        cin>>k;
        count[k]++;
        maxi=max(maxi,k);
    }
    for(i=maxi;i>=0;i--){
        dp[i]=max(dp[i+1],i*count[i]+dp[i+2]);
    }
    cout<<dp[0]<<"\n";
	return 0;
}