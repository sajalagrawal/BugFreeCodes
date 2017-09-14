//https://www.hackerrank.com/challenges/electronics-shop/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int s,n,m,i,j;
    cin>>s>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<m;i++)cin>>b[i];
    sort(a,a+n,greater<int>());
    sort(b,b+m);
    int maxx=-1;
    for(i=0,j=0;i<n;i++){
        for(;j<m;j++){
            if((a[i]+b[j])>s)break;
            maxx=max(maxx,a[i]+b[j]);
        }
    }
    cout<<maxx<<"\n";
	return 0;
}
