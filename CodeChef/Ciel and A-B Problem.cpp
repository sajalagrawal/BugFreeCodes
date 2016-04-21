//https://www.codechef.com/problems/CIELAB
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b,diff;
    cin>>a>>b;
    diff=a-b;
    if(diff%10==9)
      diff--;
    else
       diff++;
 
    cout<<diff;
    return 0;
}
 
