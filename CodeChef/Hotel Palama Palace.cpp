//https://www.codechef.com/problems/HTLPLM
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
pair<ll,ll>p[5005];

int main() {
	// your code goes here
	ll t,n,q,r;
	int i;
    cin>>t;
    while(t--){
        cin>>n>>q;
        for(i=0;i<n;i++){
            cin>>p[i].first;
            cin>>p[i].second;
        }
        while(q--){
            cin>>r;
            int flag=0;
            for(i=0;i<n;i++){
                if(p[i].first<=r and p[i].second>=r){
                    flag=1;
                    break;
                }
            }
            if(flag==1)cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
	return 0;
}
