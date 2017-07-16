//https://www.hackerrank.com/challenges/drawing-book/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,p;
    cin>>n>>p;
    if(p<=n/2)cout<<p/2<<"\n";
        else cout<<(n/2-p/2)<<"\n";
	return 0;
}
