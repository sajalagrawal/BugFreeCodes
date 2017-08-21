//https://www.codechef.com/problems/OBTTRNGL
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll t,k,a,b;
    cin>>t;
    while(t--){
        cin>>k>>a>>b;
        //ll an=(360/k)*(abs(b-a));
        //an=max(an,360-an);
        ll v1=abs(b-a)-1;
        ll v2=k-abs(b-a)-1;
        ll diff=min(v1,v2);
        if(v1!=v2){
            cout<<(diff)<<"\n";
        }else cout<<"0\n";
    }
	return 0;
}

/*
INPUT: 
1
78 7 46
OUTPUT:
0
*/