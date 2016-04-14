//https://www.codechef.com/problems/FLOW014
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;
 
int main()
{
    int t;
    float h,c,s;
    cin>>t;
    while(t--)
    {
        cin>>h>>c>>s;
        if(h>50.0 && c<0.7 && s>5600.0)
            cout<<"10\n";
        else if(h>50 && c<0.7)
            cout<<"9\n";
        else if(c<0.7 && s>5600)
            cout<<"8\n";
        else if(h>50 && s>5600)
            cout<<"7\n";
        else if(h>50 || c<0.7 || s>5600)
            cout<<"6\n";
        else
            cout<<"5\n";
    }
    return 0;
}
