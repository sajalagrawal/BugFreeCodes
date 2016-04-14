//https://www.codechef.com/problems/FLOW013
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;
 
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a+b+c==180)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
 
