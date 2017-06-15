//https://www.codechef.com/problems/SUMQ/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
//same code instead of scanf used cin and it gave TLE in one testcase
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    int t,p,q,r,i,j,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&p,&q,&r);
        ll a[p],b[q],c[r];
        for(i=0;i<p;i++){
            scanf("%lld",&a[i]);
        }
        for(i=0;i<q;i++){
            scanf("%lld",&b[i]);
        }
        for(i=0;i<r;i++){
            scanf("%lld",&c[i]);
        }
        sort(a,a+p);
        sort(b,b+q);
        sort(c,c+r);
        ll sum=0;
        ll suma=0,sumc=0;
        j=k=0;
        if(a[0]>b[q-1] or b[q-1]<c[0])cout<<"0\n";
        else{
            i=0;
            while((b[i]<a[0]) && (i<q))	i++;
        	while((b[i]<c[0]) && (i<q))	i++;
        	//cout<<"i="<<i<<endl;
            for(;i<q;i++){
                while(j<p and a[j]<=b[i]){
                    suma=(suma+(a[j])%MOD)%MOD;
                    j++;
                }
                while(k<r and c[k]<=b[i]){
                    sumc=(sumc+(c[k])%MOD)%MOD;
                    k++;
                }
                //cout<<"suma="<<suma<<endl;
                //cout<<"sumc="<<sumc<<endl;
                sum=(sum + (((suma+(b[i]*j)%MOD)%MOD) * ((sumc+(b[i]*k)%MOD)%MOD))%MOD)%MOD;
            }
            cout<<sum%MOD<<"\n";
        }
        
    }
	return 0;
} 