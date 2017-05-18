//https://www.hackerrank.com/challenges/sherlock-and-permutations
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

ll powMod(ll n,ll exp){
    if(exp==0)return 1;
    ll temp=powMod(n,exp/2)%MOD;
    if(exp%2==0)return (temp*temp)%MOD;
    else return ((((n*temp)%MOD)*temp)%MOD);
}

ll calc(ll n,ll k){
    ll res=1;
    for(ll i=1;i<=k;i++){
        //using Fermat's little theorem
        res=(((res*(n-i+1))%MOD)*(powMod(i,MOD-2))%MOD)%MOD;
    }
    return res;
}

int main() {
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        //(n+m-1) C (n)  conbinations
        cout<<calc(n+m-1,n)<<"\n";
    }
    return 0;
}
