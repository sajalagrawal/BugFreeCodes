//https://www.hackerrank.com/contests/projecteuler/challenges/euler028/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

ll power(ll x, ll y){
    unsigned ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2)%MOD;   
    if (y%2 == 0)
        return (temp*temp)%MOD;
    else
        return (x*temp*temp)%MOD;
}

//https://discuss.codechef.com/questions/16780/modulo-problem
int main() {
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        n=n/2;
        n=n%MOD;
        ll n2=(n*n)%MOD;
        ll n3=(n2*n)%MOD;
        ll temp2=8*( (2*n3)%MOD + (3*n2)%MOD + n );
        ll temp=( (temp2%MOD)*(power(3,MOD-2)%MOD) )%MOD;  //fermats little theorem
        ll ans=(temp + (2*((n*n)%MOD))%MOD + (6*n)%MOD );
        cout<<(1+ans)%MOD<<"\n"; 
    }
	return 0;
}
