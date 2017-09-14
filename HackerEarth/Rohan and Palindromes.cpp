//https://www.hackerearth.com/problem/algorithm/rohan-and-palindromes/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<math.h>
using namespace std;
#define ll long long
#define MOD 1000000007

int main()
{
    int n,k,i;
    ll ans=0,h=1;
    cin>>n>>k;
    for(i=1;i<=n/2;i++){
        h=(h*k)%MOD;
        ans=(ans+h)%MOD;
    }
    ans=(ans*2)%MOD;
    if(n&1){ //n is odd
        h=(h*k)%MOD;
        ans=(ans+h)%MOD;
    }
    cout<<ans<<"\n";
    return 0;
}