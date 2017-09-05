//https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem
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
        ll a=1,b=2,c,ans=0;
        scanf("%lld",&n); 
        ans+=b;
        while(1){
            c=a+b;
            a=b;
            b=c;
            if(c>n)break;
            if(c%2==0){
                ans+=c;
            }
        }
        printf("%lld\n",ans);
    }
	return 0;
}
