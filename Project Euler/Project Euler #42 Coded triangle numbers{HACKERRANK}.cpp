//https://www.hackerrank.com/contests/projecteuler/challenges/euler042
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
ll isTri(ll k){
    double ans=(-1+sqrt(1+8*k))/2;
    if(ans==floor(ans))return ans;
    return -1;
}
int main() {
    int t;
    ll k;
    cin>>t;
    while(t--){
        cin>>k;
        cout<<isTri(k)<<"\n";
    }
	return 0;
}
