//https://www.codechef.com/problems/CHNGFUNC
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll A,B,ans=0,a;
    scanf("%lld%lld",&A,&B);
    for(a=1;a<=A;a++){
        ll lower=ceil(sqrt(a*a+1));
        //ll lower=a+1;  this works fine, too.
        ll upper=(sqrt(a*a+B));
        upper=floor(upper);
        if(lower<=upper)ans+=upper-lower+1;
        //cout<<"ans="<<ans<<endl;
    }
    printf("%lld\n",ans);
	return 0;
}
