//https://www.codechef.com/problems/FCTRL
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int t,res,a[100000],f,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a[i];
    }
    for(i=0;i<t;i++){
        res=0;
        while(a[i]>=5){
            res+=a[i]/5;
            a[i]/=5;
        }
        cout<<res<<"\n";
    }
    return 0;
}
