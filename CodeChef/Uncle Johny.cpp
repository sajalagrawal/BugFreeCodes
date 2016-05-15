//https://www.codechef.com/problems/JOHNY
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int t,i,k,johny,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+1];
        a[0]=0;
        for(i=1;i<=n;i++)
            cin>>a[i];
        cin>>k;
        johny=a[k];
        sort(a,a+n+1);
        for(i=1;i<=n;i++)
        {
            if(a[i]==johny){
                cout<<i<<"\n";
                break;
            }
       }
 
 
    }
    return 0;
}
