//https://www.codechef.com/problems/CIELRCPT
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;
 
int main()
{
    int t,p,n,ans;
    cin>>t;
    while(t--){
        cin>>p;
        n=2048;
        ans=0;
        while(n>=1){
            ans=ans+ p/n;
            p=p%n;
            n=n/2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
