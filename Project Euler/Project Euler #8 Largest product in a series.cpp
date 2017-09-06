//https://www.hackerrank.com/contests/projecteuler/challenges/euler008/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,k;
    cin>>t;
    while(t--){
        int i,j;
        cin>>n>>k;
        //cout<<"n="<<n<<"k="<<k<<endl;
        char buffer[1001];
        ll ans,maxx=0;
        scanf("%s",buffer);
        for(i=0;i<=n-k;i++){
            ans=1;
            for(j=i;j<i+k;j++){
                ans=ans*(buffer[j]-'0');
            }
            maxx=max(ans,maxx);
        }
        cout<<maxx<<"\n";
    }
	return 0;
}
