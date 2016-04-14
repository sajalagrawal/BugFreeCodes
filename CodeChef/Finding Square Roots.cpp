//https://www.codechef.com/problems/FSQRT
//Author - Sajal Agrawal
//@sajalagrawal

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
int k=t;
int a[t],sq[t],i=0;
while(t--)
{
cin>>a[i];
i++;
}
i=0;
while(k--)
{
sq[i]=sqrt(a[i]);
cout<<sq[i]<<"\n";
i++;
}
 
return 0;
}
