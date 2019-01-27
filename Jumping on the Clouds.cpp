//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int main() {
    ll n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll jump=0;
    for(i=0;i<=n-3;){
        if(a[i+2]==0){
            i=i+2;
        }else if(a[i+2]==1){
            i++;
        }
        jump++;
    }
    if(i==n-2)jump++;
    cout<<jump;
    return 0;
}
/*
6
0 0 0 1 0 0
ans=3
*/
