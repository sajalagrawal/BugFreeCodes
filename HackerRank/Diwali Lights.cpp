//https://www.hackerrank.com/challenges/diwali-lights
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t,n,ans,i;
    cin>>t;
    while(t--){
        cin>>n;
        ans=1;
        for(i=1;i<=n;i++){
            ans=ans*2;
            ans%=100000;
        }
        ans--;
        ans%=100000;
        cout<<ans<<"\n";
    }
    return 0;
}
