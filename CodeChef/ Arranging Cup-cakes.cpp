//https://www.codechef.com/problems/RESQ
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
    int t,n,ans,i,div;
    cin>>t;
    while(t--){
        cin>>n;
        ans=n-1;
        i=(int)sqrt(n);
        for(;i>1;i--){
            if(n%i==0){
                div=n/i;
                ans=div-i;
                break;
            }
        }
        cout<<ans<<"\n";
    }
	return 0;
}
 
