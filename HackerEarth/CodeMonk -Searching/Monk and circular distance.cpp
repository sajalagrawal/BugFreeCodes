//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/circular-distance-3/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,query;
    long long rad;
    cin>>n;
    long long x[n],y[n];
    double dis[n];
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
        dis[i]=sqrt(x[i]*x[i]+y[i]*y[i]);
    }
    sort(dis,dis+n);
    /*cout<<"dis-\n";
    for(i=0;i<n;i++)cout<<dis[i]<<" ";
    cout<<"\n";*/
    cin>>query;
    while(query--){
        cin>>rad;
        int l=0,r=n-1;
        int ans=0;
        /*for(i=0;i<n;i++){
            if(dis[i]<=(double)r)ans++;
        }*/
        while(l<=r){
            int mid=(l+r)/2;
            //cout<<"l="<<l<<"\n";
            //cout<<"r="<<r<<"\n";
            //cout<<"mid="<<mid<<"\n";
            if(dis[mid]<=(double)rad){
                ans=mid;
                //cout<<"ans="<<ans<<"\n";
                l=mid+1;
            }else r=mid-1;
        }
        if(r>=0)cout<<ans+1<<"\n";
        else cout<<"0\n";
    }
    return 0;
}
