//https://www.codechef.com/COOK85/problems/ELEVSTRS
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    double t,n,v,w;
    cin>>t;
    while(t--){
        cin>>n>>v>>w;
        if((2*n/w)>(sqrt(2)*n/v))cout<<"Stairs\n";
        else cout<<"Elevator\n";
    }
	return 0;
}
 