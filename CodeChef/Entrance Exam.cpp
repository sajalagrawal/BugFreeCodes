//https://www.codechef.com/problems/ENTEXAM
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll t,n,k,e,m,i,j;
    cin>>t;
    while(t--){
        cin>>n>>k>>e>>m;
        ll a[n],sum=0,serg=0,temp;
        for(i=0;i<n-1;i++){
            sum=0;
            for(j=0;j<e;j++){
                cin>>temp;
                sum+=temp;
            }
            a[i]=sum;
        }
        sum=0;
        for(j=0;j<e-1;j++){
            cin>>temp;
            sum+=temp;
        }
        a[i]=sum;
        serg=sum;
        sort(a,a+n-1);
        if(serg>a[n-k-1]){
            cout<<"0\n";
            goto end;
        }
        if((serg+m)<=a[n-k-1]){
            cout<<"Impossible\n";
            goto end;
        }
        cout<<(a[n-k-1]+1-serg)<<"\n";
        end:;
    }
	return 0;
}
