//https://www.hackerrank.com/contests/projecteuler/challenges/euler044
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
//http://www.mathblog.dk/project-euler-44-smallest-pair-pentagonal-numbers/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
bool isPentagonal(ll x){
    double n=(sqrt(24*x+1)+1)/(double)6;
    if(n==floor(n))return true;
    return false;
}
int main() {
    ll ans=LLONG_MAX,n=2,pstart,px,i,x;
    while(1){
        if(ans<LLONG_MAX)break;
        pstart=(n*(3*n-1))/2;
        for(i=1;i<n;i++){
            //cout<<"n="<<n<<" i="<<i<<endl;
            x=n-i;
            px=(x*(3*x-1))/2;
            //cout<<"x="<<x<<endl;
            if(isPentagonal(px+pstart) and isPentagonal(pstart-px)){
                ans=pstart-px;
                break;
            }
        }
        n=n+1;
    }
    cout<<ans<<"\n";
	return 0;
}
