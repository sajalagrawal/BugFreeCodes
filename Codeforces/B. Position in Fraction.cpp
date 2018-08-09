//http://codeforces.com/contest/900/problem/B
//https://www.google.co.in/url?sa=t&rct=j&q=&esrc=s&source=web&cd=2&cad=rja&uact=8&ved=0ahUKEwjFo8bc7oPYAhVKO48KHfexCvIQFgguMAE&url=http%3A%2F%2Fwww.numbertheory.org%2Fpdfs%2Fdecimal.pdf&usg=AOvVaw0-3oGTKuzxHF9vx4HQkTA0
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
//remainder can always be between 0 to b-1, hence b number of possibilities
int main() {
    int a,b,c,quo,rem;
    cin>>a>>b>>c;
    for(int i=0;i<b;i++){
        quo=a*10/b;
        if(quo==c){
            cout<<i+1<<"\n";
            return 0;
        }
        a=a*10-quo*b;
    }
    cout<<"-1\n";
	return 0;
}
