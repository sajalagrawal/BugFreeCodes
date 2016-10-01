//https://www.codechef.com/problems/CFRTEST
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;

int main()
{
    int t,n,i,value;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[101]={0},ans=0;
        for(i=0;i<n;i++){
            cin>>value;
            ar[value]++;
        }
        for(i=0;i<=100;i++){
            if(ar[i]>=1) ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
