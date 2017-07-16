//https://www.hackerrank.com/challenges/kangaroo/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    float x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    float jumps=(x1-x2)/(v2-v1);
    if(jumps>=0 and floor(jumps)==jumps)cout<<"YES\n";
    else cout<<"NO\n";
	return 0;
}
