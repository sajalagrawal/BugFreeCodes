//https://www.hackerrank.com/contests/codemania1/challenges/binary-queries
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
bool solve(ll n,ll m){
    ll bits=0;
    while(n){
        bits+=n&1;
        n=n>>1;
    }
    if(bits==m)return true;
    return false;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n,l,r,m;
    cin>>n;
    while(n--){
        cin>>l>>r>>m;
        ll i,ans=0;
        for(i=l;i<=r;i++){
            if(solve(i,m))ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
