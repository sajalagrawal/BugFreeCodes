//https://www.hackerrank.com/contests/projecteuler/challenges/euler034
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
//for projecteuler problem we need to check till 7 digits only..
int fact[10];
ll factSum(int n){
    //cout<<"n="<<n<<endl;
    ll ans=0;
    int k;
    while(n){
        k=n%10;
        ans+=fact[k];
        n=n/10;
    }
    return ans;
}
int main() {
    fact[0]=1;
    int i;
    for(i=1;i<=9;i++){
        fact[i]=fact[i-1]*i;
        //cout<<fact[i]<<endl;
    }
    int n;
    cin>>n;
    ll sum,ans=0;
    for(i=10;i<n;i++){
        sum=factSum(i);
        //cout<<"i="<<i<<" factsum="<<sum<<endl;
        if(sum%i==0){
            ans+=i;
        }
    }
    cout<<ans<<"\n";
    return 0;
}