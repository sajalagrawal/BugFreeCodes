//http://codeforces.com/contest/892/problem/B
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,i,count=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int minn=n-1-a[n-1];
    //cout<<"min="<<minn<<endl;
    for(i=n-2;i>=0;i--){
        if(i<minn)count++;
        minn=min(minn,i-a[i]);
        //cout<<"min="<<minn<<endl;
    }
    printf("%d",count);
	return 0;
}
