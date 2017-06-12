//https://www.codechef.com/JUNE17/problems/NEO01/
//Author - Sajal Agrawal
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
        ll sum=0,mult=0;
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(i=n-1;i>=0;i--){
            if(a[i]>=0){
                sum+=a[i];
                mult++;
            }else 
                break;
        }
        //cout<<"sum="<<sum<<endl;
        //cout<<"mult="<<mult<<endl;
        ll nsum=0; //negative sum
        for(;i>=0;i--){
            if((sum*mult)<=((sum+a[i])*(mult+1))){
                sum=sum+a[i];
                mult++;
            }else break;
        }
        //cout<<"sum="<<sum<<endl;
        //cout<<"mult="<<mult<<endl;        
        sum*=mult;
        //cout<<"sum="<<sum<<endl;
        nsum=0;
        for(;i>=0;i--){
            nsum+=a[i];
        }
        
        cout<<(sum+nsum)<<"\n";
    }
	return 0;
} 