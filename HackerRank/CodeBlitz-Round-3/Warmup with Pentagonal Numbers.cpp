//https://www.hackerrank.com/contests/codeblitz3/challenges/warmup-with-pentagonal-numbers
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPentagonal(ll n){
    double res=(1+sqrt(1+24*n))/6;
    if(floor(res)==res)return true;
    return false;
}
int main() {
    //freopen("ip10.txt","r",stdin);
    //freopen("op10.txt","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
	    ll n;
	    scanf("%lld",&n);
	    if(isPentagonal(n))
        	printf("YES\n");
	    else
        	printf("NO\n");
	}
	return 0;
}