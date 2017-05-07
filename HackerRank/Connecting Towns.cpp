//https://www.hackerrank.com/challenges/connecting-towns
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define MOD 1234567
int main() {
    ll t,n,mult,i,k;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>mult;
        for(i=0;i<n-2;i++){
            cin>>k;
            mult*=k%MOD;
            mult%=MOD;
        }
        cout<<mult%MOD<<endl;
    }
    return 0;
}
