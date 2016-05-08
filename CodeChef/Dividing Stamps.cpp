//https://www.codechef.com/problems/DIVIDING
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int ar[n],i,sum1=0,sum2=0;
    for(i=0;i<n;i++)
        cin>>ar[i];
 
    for(i=0;i<n;i++)
        sum1=sum1+ar[i];
 
    for(i=1;i<=n;i++)
        sum2=sum2+i;
 
    if(sum1==sum2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
