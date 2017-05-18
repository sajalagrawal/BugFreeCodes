//https://www.hackerrank.com/challenges/strange-grid
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll r,c,ans;
    cin>>r>>c;
    
    if(r%2==1)ans=((r+1)/2-1)*10;
    else ans=((r+1)/2-1)*10+1; 
    ans+=(c-1)*2;
    cout<<ans<<"\n";
    return 0;
}