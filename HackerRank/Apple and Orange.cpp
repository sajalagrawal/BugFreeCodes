//https://www.hackerrank.com/challenges/apple-and-orange/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int s,t,a,b,m,n,d,apple=0,orange=0;
    cin>>s>>t>>a>>b>>m>>n;
    while(m--){
        cin>>d;
        if(d>=0 and d>=(s-a) and d<=(t-a)){
            apple++;
        }
    }
    while(n--){
        cin>>d;
        if(d<=0){
            d=-d;
            if(d>=abs(t-b) and d<=abs(s-b))
                orange++;
        }
    }
    cout<<apple<<"\n"<<orange<<"\n";
	return 0;
}
