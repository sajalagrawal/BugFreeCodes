//https://www.hackerrank.com/challenges/the-birthday-bar/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,d,m,i;
    cin>>n;
    int a[n],count=0;
    for(i=0;i<n;i++)cin>>a[i];
    cin>>d>>m;
    int sum=0;
    for(i=0;i<m;i++)sum+=a[i];
    if(sum==d)count++;
    for(i=1;i<=n-m;i++){
        sum-=a[i-1];
        sum+=a[i+m-1];
        if(sum==d)count++;
    }
    cout<<count<<"\n";
	return 0;
}
