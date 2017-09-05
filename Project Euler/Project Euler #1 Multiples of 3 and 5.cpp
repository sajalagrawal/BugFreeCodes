//https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll t,n;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        n--;
        ll a=((n/3)*(6+3*(n/3-1)))/2;
        ll b=((n/5)*(10+5*(n/5-1)))/2;
        ll c=((n/15)*(30+15*(n/15-1)))/2;
        printf("%lld\n",(a+b-c));
    }
	return 0;
}
