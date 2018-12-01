//https://www.hackerrank.com/contests/projecteuler/challenges/euler041
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

bool isPrime(ll n){
    if(n==2)return true;
    if(n==1 || n%2==0)return false;
   
    ll i=3;
    while(i*i<=n){
        if(n%i==0)return false;
        i=i+2;
    }
    return true;
}

int main() {
    int t,i;
    cin>>t;
    vector<ll> panPrimes;
    panPrimes.pb(-1);
    string str="123456789";
    for(i=2;i<=9;i++){
        string start=str.substr(0,i);
        while(next_permutation(start.begin(),start.end())){
                ll curNum=stol(start);
                if(isPrime(curNum)){
                    panPrimes.pb(curNum);
                }
            }
    }
    //for(i=0;i<panPrimes.size();i++)cout<<panPrimes[i]<<endl;
    while(t--){
        ll n,ans=-1;
        int i=0;
        cin>>n;
        vector<ll>::iterator low=upper_bound(panPrimes.begin(),panPrimes.end(),n);
        low--;
        ans=(*low);
        cout<<ans<<"\n";
    }
	return 0;
}
