//https://www.codechef.com/problems/CHEFA
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,i;
    cin>>t;
    while(t--){
        ll ans=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(i=n-1;i>=0;i=i-2)ans+=a[i];
        cout<<ans<<"\n";
    }
	return 0;
}
