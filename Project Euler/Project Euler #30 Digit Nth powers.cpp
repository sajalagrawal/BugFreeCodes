//https://www.hackerrank.com/contests/projecteuler/challenges/euler030/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
ll digitPowerSum(ll n,ll p){
    ll res=0,k;
    while(n){
        k=n%10;
        res+=pow(k,p);
        n=n/10;
    }
    return res;
}
int main() {
    ll n,i,ans=0;
    cin>>n;
    for(i=2;i<=8*9*9*9*9*9*9;i++){
        if(i==digitPowerSum(i,n)){
            ans+=i;
        }
    }
    cout<<ans<<"\n";
	return 0;
}
