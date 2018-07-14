//http://codeforces.com/problemset/problem/891/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,i,flag=0;
    scanf("%d",&n);
    int a[n],count=0;
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]==1)count++;
    }
    if(count){
        printf("%d\n",(n-count));
        return 0;
    }
    int gcdd,len=INT_MAX,l,r,ans=0;
    for(l=0;l<n;l++){
        gcdd=a[l];
        for(r=l;r<n;r++){
            gcdd=__gcd(gcdd,a[r]);
            if(gcdd==1){
                //cout<<"i="<<i<<" r="<<r<<endl;
                len=min(len,r-l+1);
                //cout<<"len="<<len<<endl;
            }
        }
    }
    if(len==INT_MAX){ //if numbers are such 2,4,6 gcd is never 1
        printf("-1\n"); 
        return 0;
    }
    ans=len-1+n-1;
    printf("%d\n",ans);
    
	return 0;
}


/*
4
1 1 1 1 
ans=0
 
4
1 2 3 1
ans=2
*/