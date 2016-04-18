//https://www.codechef.com/problems/SNAPE
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<math.h>
using namespace std;
 
int main()
{
    int t,i=0,t2;
    cin>>t;
    t2=t;
    int b,ls;
    float rsmin[t],rsmax[t];
    while(t--){
        cin>>b>>ls;
        rsmin[i]=sqrt(ls*ls-b*b);
        rsmax[i]=sqrt(ls*ls+b*b);
        i++;
    }
 
    for(i=0;i<t2;i++){
        cout<<rsmin[i]<<" "<<rsmax[i]<<"\n";
    }
    return 0;
}
