//http://codeforces.com/contest/892/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,i;
    ll total=0;
    scanf("%d",&n);
    int v[n],c[n];
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
        total+=v[i];
    }
    for(i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    sort(c,c+n);
    int space=c[n-1]+c[n-2];
    if(total<=space)printf("YES\n");
    else printf("NO\n");
	return 0;
}
