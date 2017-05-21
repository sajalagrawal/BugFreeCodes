//http://www.spoj.com/problems/ANARC05B/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
int main() {
    ll m,n,i,j;
    while(true){
        cin>>m;
        if(m==0)break;
        ll a[m];
        for(i=0;i<m;i++)cin>>a[i];
        cin>>n;
        ll b[n];
        for(i=0;i<n;i++)cin>>b[i];
        i=j=0;
        ll sum1=0,sum2=0,res=0;
        for(;i<m and j<n;){
            if(a[i]>b[j]){
                sum2+=b[j++];
            }
            else if(a[i]<b[j]){
                sum1+=a[i++];
            }else{
                res+=max(sum1,sum2)+a[i];
                sum1=sum2=0;
                i++;
                j++;
                while(i<m and j<n and a[i]==b[j]){
                    res+=a[i];
                    i++;
                    j++;
                }
            }
        }
        while(i<m){
            sum1+=a[i++];
        }
        while(j<n){
            sum2+=b[j++];
        }
        res+=max(sum1,sum2);
        cout<<res<<"\n";
    }
	return 0;
}

