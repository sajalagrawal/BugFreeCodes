//http://codeforces.com/contest/900/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll n;
    ll left=0,right=0;
    cin>>n;
    while(n--){
        ll x,y;
        cin>>x>>y;
        if(x>0)right++;
        else left++;
    }
    if(left>=2 and right>=2)cout<<"No\n";
    else cout<<"Yes\n";
	return 0;
}