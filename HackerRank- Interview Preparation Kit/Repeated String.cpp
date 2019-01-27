//https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int main() {
    string str;
    cin>>str;
    ll n,ct=0;
    cin>>n;
    if(str.size()>=n){
        ct=count(str.begin(),str.begin()+n,'a');
    }else{
        ct=count(str.begin(),str.end(),'a');
        ll times=n/str.size();
        ct=ct*times;
        ll rem=n%str.size();
        ct=ct+count(str.begin(),str.begin()+rem,'a');
    }
    cout<<ct;

    return 0;
}
