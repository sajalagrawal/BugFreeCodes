//https://www.hackerrank.com/contests/projecteuler/challenges/euler021
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int main() {
    int store[1000005],i,j;
    memset(store,0,sizeof store);
    for(i=2;i<100005;i++){
        for(j=1;j*j<i;j++){
            if(i%j==0){
                store[i]+=j;
                store[i]+=i/j;
            }
        }
        store[i]-=i;
        if(j*j==i)store[i]+=j;
    }
    //for(i=1;i<=10;i++)cout<<store[i]<<" ";
    //cout<<store[284]<<endl;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll ans=0,k;
        for(i=1;i<=n;i++){
            k=store[i];
            //store[k] may be store[100005+]
            if(k!=i and store[k]==i){
                ans+=i;
                //cout<<"i="<<i<<endl;
            }
        }
        cout<<ans<<"\n";
            
    }
	return 0;
}
