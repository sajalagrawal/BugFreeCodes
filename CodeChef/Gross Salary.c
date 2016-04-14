//https://www.codechef.com/problems/FLOW011
//Author - Sajal Agrawal
//@sajalagrawal

#include<iostream>
using namespace std;
main(){
int t;
float sal,hra,da,gross;
cin>>t;
while(t--){
cin>>sal;
if(sal<1500)
{
hra=0.1*sal;
da=0.9*sal;
}
else
{
hra=500;
da=0.98*sal;
}
gross=sal+hra+da;
cout<<gross<<"\n";
}
return 0;
}
 
