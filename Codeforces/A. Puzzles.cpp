//http://codeforces.com/problemset/problem/337/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,m,i;
    scanf("%d%d",&n,&m);
    int a[m],ans=INT_MAX;
    for(i=0;i<m;i++)scanf("%d",&a[i]);
    sort(a,a+m);
    for(i=0;i<=m-n;i++){
        ans=min(ans,a[i+n-1]-a[i]);
    }
    printf("%d\n",ans);
	return 0;
}
