//https://www.hackerrank.com/contests/projecteuler/challenges/euler006/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll ans=0,sum=(n*(n+1))/2-1;
        for(int i=1;i<=n;i++){
            ans+=i*(sum);
            sum=sum-i-1;
        }
        cout<<2*ans<<"\n";
    }
	return 0;
}
