//https://www.hackerrank.com/challenges/reverse-game
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k<n/2)cout<<(2*k+1)<<endl;
        else cout<<(2*(n-k-1))<<endl;
    }
    return 0;
}

