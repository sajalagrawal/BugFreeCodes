//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int q,a,b,c;
    cin>>q;
    while(q--){
        cin>>a>>b>>c;
        if(abs(a-c)>abs(b-c))cout<<"Cat B\n";
        else if(abs(a-c)<abs(b-c))cout<<"Cat A\n";
        else cout<<"Mouse C\n";
    }
	return 0;
}
