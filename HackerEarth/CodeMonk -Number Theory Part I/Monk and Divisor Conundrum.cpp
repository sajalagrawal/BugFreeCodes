//https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main()
{
    ll n,x,y,k,i,j;
    int max=INT_MIN;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k>max)max=k;
        mp[k]++;
    }
    map<int,int>::iterator it;
    int a[200001];
    for(i=0;i<=200000;i++)a[i]=0;
    for(k=1;k<=max;k++){
        for(j=k;j<=max;j=j+k){
            a[k]+=mp[j];
        }
    }
    
    int q;
    cin>>q;
    while(q--){
        cin>>x>>y;
        ll lcm=x*y/(gcd(x,y));
        if(lcm<=200000) cout<<(a[x]+a[y]-a[lcm])<<"\n";
        else cout<<(a[x]+a[y])<<"\n";
    }
    return 0;
}
