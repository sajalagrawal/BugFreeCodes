//https://www.codechef.com/OCT16/problems/CHEFKEY/
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,n,m,c,ans,i,j;
    cin>>t;
    while(t--){
        cin>>n>>m>>c;
        ans=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(i*j==c)ans++;
                if(i*j>c)break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
 
