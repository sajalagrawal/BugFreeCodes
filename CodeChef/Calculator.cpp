//https://www.codechef.com/JULY17/problems/CALC/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,b,maxx=LLONG_MIN;
        cin>>n>>b;
        ll count=n/b;
        if(count&1){
            ll i=count/2;
            ll res1=(n%b + b*i)*(n/b-i);
            i=count/2+1;
            ll res2=(n%b + b*i)*(n/b-i);
            maxx=max(res1,res2);
        }else{
            ll i=count/2;
            maxx=(n%b + b*i)*(n/b-i);
        }
        /*cout<<count<<endl;
        for(ll i=0;i<=count;i++){
            ll res=(n%b + b*i)*(n/b-i);
            cout<<"i="<<i<<"res="<<res<<endl;
            if(res>max){
                max=res;
                cout<<"i="<<i<<endl;
            }
        }*/
        cout<<maxx<<"\n";
    }
	return 0;
}