//https://www.codechef.com/problems/SMPAIR
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i=0,sum=0;
        cin>>n;
        int a[n];
        for(;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        sum=a[0]+a[1];
        cout<<sum<<"\n";
    }
}
