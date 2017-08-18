//https://www.codechef.com/AUG17/problems/CHEFMOVR
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll t,n,i,d,k;
    cin>>t;
    while(t--){
        cin>>n>>d;
        ll a[n],sum=0,flag=0,ans=0,target;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0){
            flag=1;
        }
        //cout<<"sum="<<sum<<endl;
        if(flag==0){
            target=sum/n;
            //cout<<"target:"<<target<<endl;
            for(i=0;i<n-d;i++){
                //cout<<a[i]<<" "<<a[i+d]<<endl;
                k=abs(target-a[i]);
                
                if(a[i]<=target ){//and a[i+d]-k>=0
                    a[i]+=k;
                    a[i+d]-=k;
                    ans+=k;
                }else if(a[i]>target){//and a[i]-k>=0
                    a[i]-=k;
                    a[i+d]+=k;
                    ans+=k;
                }
                //cout<<a[i]<<" "<<a[i+d]<<endl;
            }
            for(i=1;i<n;i++){
                if(a[i]!=a[0]){
                    flag=1;
                    //cout<<"check";
                    break;
                }
            }
        }
        if(flag==1)cout<<"-1\n";
        else cout<<ans<<"\n";
    }
	return 0;
}

/*
3
3 1
0 0 9
4 1
1 4 5 10
3 1
3 0 9
*/