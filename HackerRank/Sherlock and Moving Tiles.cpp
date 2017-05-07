//https://www.hackerrank.com/challenges/sherlock-and-moving-tiles
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll l,s1,s2,q,n;
    cin>>l>>s1>>s2>>q;
    while(q--){
        cin>>n;
        double ans=(l*sqrt(2)-sqrt(2*n))/(abs(s2-s1));
        cout<<std::fixed<<ans<<endl;
    }
    return 0;
}

