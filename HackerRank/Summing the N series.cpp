//https://www.hackerrank.com/challenges/summing-the-n-series
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define MOD 1000000007
int main() {
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        n%=MOD;
        cout<<(n*n)%MOD<<endl;
    }
    return 0;
}
