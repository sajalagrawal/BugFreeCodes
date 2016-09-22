//https://www.hackerearth.com/invento-2k16/algorithm/f17c32b4337a4046b72dab79e4dec899/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
 
using namespace std;
 
int main()
{
    int n,ans=0;
    cin>>n;
    int a[n],i=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            ans++;
        }
    }
 
    cout<<ans;
    return 0;
}
