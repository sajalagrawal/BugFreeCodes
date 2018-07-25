//http://codeforces.com/contest/897/problem/B
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll k,p,i,ans=0,temp,add;
    cin>>k>>p;
    for(i=1;i<=k;i++){
        //cout<<"i="<<i<<endl;
        temp=i;
        add=i;
        while(temp){
            add=(add*10+temp%10)%p;
            temp=temp/10;
        }
        //cout<<add<<endl;
        ans=(ans+add)%p;
    }
    cout<<ans<<"\n";
	return 0;
}
