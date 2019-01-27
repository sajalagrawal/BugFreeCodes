//https://www.hackerearth.com/problem/algorithm/ankit-and-race-team-10/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
ll power(ll a,ll b){//a^b
    if(b==0)return 1;
    if(b==1)return a;
    ll temp=power(a,b/2)%MOD;
    if(b%2==1){ //b is odd
        return ( a*((temp*temp)%MOD) )%MOD; //bracket are very imp!
    }
    return (temp*temp)%MOD;
}
int main() {
	ll t,n,k,i;
	cin>>t;
	ll fact[100005];
	fact[0]=1;
	fact[1]=1;
	for(i=2;i<100005;i++){
	    fact[i]=(fact[i-1]*i)%MOD;
	    //cout<<fact[i]<<" ";
	}
	//cout<<endl;
	while(t--){
	    cin>>n>>k;
	    ll a[n]; 
	    ll ans=0;
	    ll end=n-k+1;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
        sort(a,a+n);
        ll comb=1;
        for(i=1;i<=end;i++){
            comb=fact[n-i]%MOD;
            comb=( comb*power(fact[k-1],MOD-2) )%MOD;
            comb=( comb*power(fact[n-i-k+1],MOD-2) )%MOD;
            ans =( ans+(comb*a[i-1])%MOD )%MOD;
        }
	    cout<<ans%MOD<<endl;    
	}
	return 0;
}
