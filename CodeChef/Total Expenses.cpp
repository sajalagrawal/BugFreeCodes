//https://www.codechef.com/problems/FLOW009
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<iomanip>
using namespace std;
 
int main()
{
    int t;
    double q,p,pr;
    cin>>t;
    while(t--){
        cin>>q>>p;
        if(q<=1000.0){
            pr=q*p;
            cout<<setprecision (6) << fixed<<pr<<"\n";
        }
        else{
            pr=q*p*0.9;
            cout<<setprecision (6) << fixed<<pr<<"\n";
        }
 
    }
    return 0;
}
