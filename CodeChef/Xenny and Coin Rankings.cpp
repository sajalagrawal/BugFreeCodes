//https://www.codechef.com/JUNE17/problems/XENRANK/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    ll t,a,b,n;
    cin>>t;
    while(t--){
        cin>>a>>b;
        n=a+b;
        cout<<((n*(n+1))/2+1+a)<<"\n";
    }
	return 0;
}
 
 