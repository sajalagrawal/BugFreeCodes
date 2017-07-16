//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,k,i,j;
    cin>>n>>k;
    int a[n],count=0;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j])%k==0)count++;
        }
    }
    cout<<count<<"\n";
	return 0;
}
