//http://codeforces.com/contest/891/problem/B
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    //as the array contains distinct integers there will always be a possible solution.
    int n,i;
    scanf("%d",&n);
    pair<int,int> a[25];
    for(i=0;i<n;i++){
        scanf("%d",&a[i].first);
        a[i].second=i;
    }
    sort(a,a+n);
    int store[22];
    for(i=0;i<n;i++){
        store[a[i].second]=i;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[(store[i]+1)%n].first);
    }
	return 0;
}
