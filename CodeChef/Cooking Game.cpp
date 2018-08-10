//https://www.codechef.com/COOK79/problems/COOKGAME/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
void solve(){
    int n,i;
    scanf("%d",&n);
    //cout<<"n="<<n<<endl;
    int a[n],ans=1;
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    if(a[0]>1){
        printf("0\n");
        return;
    }
    a[0]=1;
    i=n-1;
    while(a[i]==-1)i--;
    for(;i>=0;i--){
        //cout<<"a[i]="<<a[i]<<endl;
        if(a[i]==-1 and i<n-1 and a[i+1]>1 )a[i]=a[i+1]-1;
        if(a[i]>=2 and i<n-1 and a[i+1]!=(a[i]+1) and a[i+1]!=1 and a[i+1]!=-1){
            printf("0\n");
            return;
        }
        if(a[i]==1 and i<n-1 and !(a[i+1]==1 or a[i+1]==2 or a[i+1]==-1)){
            printf("0\n");
            return;
        }
    }
    for(i=1;i<n;i++){
        //cout<<a[i]<<" ";
        if(a[i]==-1)ans=(ans*2)%MOD;
    }
    //cout<<endl;
    
    printf("%d\n",ans);
    return;
}
int main() {
    int t;
    scanf("%d",&t);
    //cout<<"t="<<t<<endl;
    while(t--){
        solve();
    }
	return 0;
}

/*
1
3
1 -1 3
ans=1 for 1 2 3

1
6
1 -1 -1 2 3 5
ans=0

4
1 -1 -1 -1

4
1 -1 4 5
*/
