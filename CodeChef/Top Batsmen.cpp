//https://www.codechef.com/COOK21/problems/BESTBATS
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int comb[12][12],i,j,t,k;
    for(i=0;i<=11;i++){
        comb[i][0]=comb[i][i]=1;
        for(j=1;j<i;j++){
            //nCr = (n-1)C(r) + (n-1)C(r-1)
            comb[i][j]=comb[i-1][j]+comb[i-1][j-1];
        }
    }
    int a[11];
    scanf("%d",&t);
    while(t--){
        for(i=0;i<11;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&k);
        sort(a,a+11);
        int repelm=a[11-k],tot=0,req=0;
        //cout<<"rep="<<repelm<<endl;
        for(i=0;i<11;i++){
            if(a[i]==repelm)tot++;
        }
        for(i=10;i+k>=11;i--){
            //cout<<"i="<<i<<endl;
            if(a[i]==repelm)req++;
        }
        //cout<<"tot="<<tot<<endl;
        //cout<<"req="<<req<<endl;
        printf("%d\n",(comb[tot][req]));
    }
	return 0;
}
