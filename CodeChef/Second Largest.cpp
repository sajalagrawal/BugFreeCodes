//https://www.codechef.com/problems/FLOW017
//Author - Sajal Agrawal
//@sajalagrawal

#include<iostream>
using namespace std;
 
int main(){
int t,a,b,c;
cin>>t;
while(t--){
cin>>a>>b>>c;
if((a>b && a<c) || (a<b && a>c))
cout<<a<<"\n";
else if((b>a && b<c) || (b<a && b>c))
cout<<b<<"\n";
else if((c>a && c<b) || (c<a && c>b))
cout<<c<<"\n";
}
return 0;
} 
