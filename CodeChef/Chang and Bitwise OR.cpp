//https://www.codechef.com/problems/CHNGOR
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n],ans;
        for(i=0;i<n;i++)cin>>a[i];
        ans=a[0];
        for(i=1;i<n;i++){
            ans=ans|a[i];
        }
        cout<<ans<<"\n";
    }
	return 0;
}
