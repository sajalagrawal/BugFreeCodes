//https://www.codechef.com/problems/GDOG
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;
 
int main()
{
    int t,n,k,m,i;
    cin>>t;
    while(t--){
        m=0;
        cin>>n>>k;
        for(i=1;i<=k;i++){
            if(n%i>m){
                 m=n%i;
            }
 
        }
        cout<<m<<"\n";
 
    }
    return 0;
}
 
