//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monk-and-search-2/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,query,i,p,q;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cin>>query;
    while(query--){
        cin>>p>>q;
        int res,l=0,r=n-1,mid,ans=n;
        if(a[n-1]<q)cout<<"0\n";
        else if(a[0]>q)cout<<n<<"\n";
        else{
            if(p==1){
                while(l<=r){
                    mid=(l+r)/2;
                    if(a[mid]>q){
                        ans=mid;
                        r=mid-1;
                    }else l=mid+1;
                }
            }else if(p==0){
                while(l<=r){
                    mid=(l+r)/2;
                    if(a[mid]>=q){
                        ans=mid;
                        r=mid-1;
                    }else l=mid+1;
                }
            }
            cout<<n-ans<<"\n";
        }
    }
    return 0;
}
