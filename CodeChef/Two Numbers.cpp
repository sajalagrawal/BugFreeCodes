//https://www.codechef.com/LTIME49/problems/TWONMS/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long 
#define MOD 1000000007
 
int main() {
    ll t,a,b,n,c,d,maxx,minn;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
 
        if(n%2==0){
            if(a>b)cout<<(a/b)<<"\n";
            else cout<<(b/a)<<"\n";
        }else{
            if(2*a>b)cout<<(2*a)/b<<"\n";
            else cout<<b/(2*a)<<"\n";
        }
    }
	return 0;
}
 