//https://www.hackerrank.com/challenges/p1-paper-cutting/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll max(ll a,ll b){
    return a>b?a:b;
}
int main(){
    ll m,n;
    cin>>m>>n;
    cout<<(m*n-1);
    return 0;
}
