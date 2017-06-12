//https://www.codechef.com/problems/HTLPLM
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
pair<ll,ll> a[5001];

int main() {
    int t,n,q,i,j;
    ll k;
    cin>>t;
    while(t--){
        cin>>n>>q;
        for(i=0;i<n;i++)cin>>a[i].first>>a[i].second;
        for(i=0;i<q;i++){
            cin>>k;
            for(j=0;j<n;j++){
                if(a[j].first<=k and a[j].second>=k){
                    break;
                }
            }
            if(j==n)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
	return 0;
}
