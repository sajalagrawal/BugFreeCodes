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
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1;i<=n;i++){
            if(store[i] and store[n-i]){
                cout<<"YES\n";
                goto end;
            }
        }
        cout<<"NO\n";
        end:;
    }
	return 0;
}
