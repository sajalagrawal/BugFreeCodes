//https://www.hackerrank.com/contests/projecteuler/challenges/euler023
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int main() {
    bool store[100005];
    int i,j,sum,t,n;
    store[0]=store[1]=false;
    for(i=2;i<100005;i++){
        sum=0;
        for(j=1;j*j<i;j++){
            if(i%j==0){
                sum+=j;
                sum+=i/j;
            }
        }
        sum-=i;
        if(j*j==i)sum+=j;
        if(sum>i)store[i]=true;
    }
    //for(i=2;i<=13;i++)cout<<store[i]<<"\n";
    ll ans=0;
    for(i=1;i<=28123;i++){
        for(j=1;j<i;j++){
            if(store[j] and store[i-j]){
                goto end;
            }
        }
        if(j==i)ans+=i;
        //cout<<"i="<<i<<endl;
        end:;
    }
    cout<<ans<<"\n"; 
	return 0;
}
