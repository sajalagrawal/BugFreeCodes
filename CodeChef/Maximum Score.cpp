//https://www.codechef.com/JAN18/problems/MAXSC
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

int main() {
    ll t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>a[i][j];
            }
        sort(a[i],a[i]+n);
        }
        ll prev=LLONG_MAX,sum=0;
        /*for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }*/
        for(i=n-2;i>=0;i--){
            if(a[i][0]>=a[i+1][n-1]){
                printf("-1\n");
                goto iterate;
            }
        }
        
        for(i=n-1;i>=0;i--){
            for(j=n-1;j>=0;j--){
                if(a[i][j]<prev){
                    sum+=a[i][j];
                    prev=a[i][j];
                    break;
                }
            }
            if(j==-1){
                printf("-1\n");
                goto iterate;
            }
        }
        printf("%lld\n",sum);
        iterate:;
    }
	return 0;
}

/*
1
3
1 1 1
1 1 3
1 1 3
-1
1
3
1 2 2
2 9 11
7 8 10
21
*/