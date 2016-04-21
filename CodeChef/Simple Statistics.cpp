//https://www.codechef.com/problems/SIMPSTAT
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<iomanip>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int t,n,i,j,temp;
    float sum,avg,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        sum=0.0;
        avg=0.0;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
 
 
        sort(a,a+n);
 
        for(i=0;i<k;i++){
            a[i]=0;
            a[n-1-i]=0;
        }
 
        for(i=0;i<n;i++)
            sum=sum+a[i];
 
        avg=sum/(n-2*k);
        cout<<setprecision(6)<<fixed<<(float)avg<<"\n";
    }
    return 0;
}
