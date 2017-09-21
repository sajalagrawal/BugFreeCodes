//https://www.codechef.com/SEPT17/problems/CHEFSUM
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        ll sum=0;
        int index=1;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll fsum=a[0];
        ll ans=fsum+sum;
        //cout<<"ans="<<ans<<endl;
        for(i=1;i<n;i++){
            sum-=a[i-1];
            fsum+=a[i];
            //cout<<fsum<<" "<<sum<<endl;
            
            if((fsum+sum)<ans){
                index=i+1;
                ans=fsum+sum;
            }
            //ans=min(ans,fsum+sum);
        }
        cout<<index<<"\n";
    
    }
	return 0;
}
