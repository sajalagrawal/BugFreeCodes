//https://www.codechef.com/problems/FLOW018
//Author - Sajal Agrawal
//@sajalagrawal

#include<iostream>
using namespace std;
int main(){
int t,n,fact;
cin>>t;
while(t--){
cin>>n;
fact=1;
while(n){
fact=fact*n;
n--;
}
cout<<fact<<"\n";
}
return 0;
}
