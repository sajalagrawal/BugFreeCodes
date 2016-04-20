//https://www.codechef.com/problems/COMM3
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<math.h>
 
using namespace std;
 
int main()
{
    int t,x1,x2,x3,y1,y2,y3,r;
    float d1,d2,d3;
    cin>>t;
    while(t--){
        cin>>r;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        r=r*r;
        d1=pow((x1-x2),2.0)+pow((y1-y2),2.0);
        d2=pow((x3-x2),2.0)+pow((y3-y2),2.0);
        d3=pow((x1-x3),2.0)+pow((y1-y3),2.0);
 
        if((d1<=r && d2<=r) || (d1<=r && d3<=r) || (d3<=r && d2<=r))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
