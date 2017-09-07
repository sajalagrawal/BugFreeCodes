//https://www.hackerrank.com/contests/projecteuler/challenges/euler009/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll t,n,i,j,k;
    cin>>t;
    while(t--){
        cin>>n;
        ll maxx=-1;
        for(i=1;i<=(n-2)/3;i++){
			//i+j+k=N and k<(i+j) sum of two sides < third side
			//i+j+k=N and N-(i+j)<(i+j) i.e. j>N/2-i
            for(j=n/2-i+1;j<=n-4;j++){   
                k=n-i-j;
                //cout<<"i="<<i<<"j="<<j<<"k="<<k<<"\n";
                if(k<=j)break;
                if(i*i+j*j==k*k){
                    maxx=max(maxx,i*j*k);
                }
            }
        }
        cout<<maxx<<"\n";
    }
	return 0;
}
