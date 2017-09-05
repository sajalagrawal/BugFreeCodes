//https://www.hackerrank.com/contests/projecteuler/challenges/euler003
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll t,n,store;
    scanf("%lld",&t);
    while(t--){
        store=-1;
        scanf("%lld",&n);
        while(n%2==0){
            n=n/2;
            store=2;
        }
        ll i;
        for(i=3;i*i<=n;i=i+2){
            if(n%i==0){
                while(n%i==0) n=n/i;
                store=i;
            }   
            
        }
        //if(n==1)store=store;
        if(n>=i)store=n;
        printf("%lld\n",store);
    }
	return 0;
}
