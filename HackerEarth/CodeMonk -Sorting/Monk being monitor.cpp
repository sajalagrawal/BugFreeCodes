//https://www.hackerearth.com/problem/algorithm/monk-being-monitor/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        int a[1000001]={0},num=0,maxHeight=0,mini,maxi,max=0,min=10000000;
        for(i=0;i<n;i++){
            cin>>num;
            a[num]++;
            if(num>maxHeight)maxHeight=num;
        }
        /*
        cout<<"maxh="<<maxHeight<<"\n";
        for(i=1;i<=maxHeight;i++)cout<<a[i]<<" ";
        cout<<"\n";*/
        for(i=1;i<=maxHeight;i++){
            if(a[i]>=max){
                max=a[i];
                maxi=i;
            }
            if(a[i]<min && a[i]>0){
                min=a[i];
                mini=i;
            }
        }
        if(maxi>mini)cout<<max-min<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}
