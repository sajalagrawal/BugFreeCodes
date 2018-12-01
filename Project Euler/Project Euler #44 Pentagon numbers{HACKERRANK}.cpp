//https://www.hackerrank.com/contests/projecteuler/challenges/euler044
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
//https://en.wikipedia.org/wiki/Pentagonal_number#The_perfect_square_test
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

ll pentagonal(ll n){
    ll ans =(n*(3*n-1))/2;
    return ans;
}

int main() {
    ll n,k,i;
    cin>>n>>k;
    for(i=k+1;i<n;i++){
        if( isPentagonal(pentagonal(i)-pentagonal(i-k)) ){ 
            cout<<pentagonal(i)<<"\n";
        }else if( isPentagonal(pentagonal(i)+pentagonal(i-k)) ){
            cout<<pentagonal(i)<<"\n";
        }
    }
	return 0;
}
