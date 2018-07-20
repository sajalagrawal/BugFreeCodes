//https://www.codechef.com/JAN18/problems/RECTANGL
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
 
int main() {
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if( (a==b and c==d) or (a==c and b==d) or (a==d and b==c) )cout<<"YES\n";
        else cout<<"NO\n";
    }
	return 0;
}
 