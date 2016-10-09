//https://www.codechef.com/problems/CONFLIP
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int t,i,n,q,g,ans;
    cin>>t;
    while(t--){
        cin>>g;
        while(g--){
            cin>>i>>n>>q;
            if(n%2==0){
                ans=n/2;
            }else{
                if(i==1){
                    if(q==1) ans=n/2;
                    else ans=n-n/2;
                }
                if(i==2){
                    if(q==1)ans=n-n/2;
                    else ans=n/2;
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
