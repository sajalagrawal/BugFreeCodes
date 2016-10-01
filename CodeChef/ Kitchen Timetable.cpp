//https://www.codechef.com/problems/KTTABLE
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n],c[n],res=0,i;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        c[0]=a[0];
        for(i=1;i<n;i++){
            c[i]=a[i]-a[i-1];
        }
        for(i=0;i<n;i++){
            if(c[i]>=b[i])
                res++;
        }
        cout<<res<<"\n";
    }
    return 0;
}
