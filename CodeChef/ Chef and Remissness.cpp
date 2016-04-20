//https://www.codechef.com/problems/REMISS
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,a,b,max;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>b)
            max=a;
        else
            max=b;
        cout<<max<<" "<<a+b<<"\n";
    }
    return 0;
}
