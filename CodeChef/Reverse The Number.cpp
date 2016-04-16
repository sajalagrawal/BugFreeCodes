//https://www.codechef.com/problems/FLOW007
//Author - Sajal Agrawal
//@sajalagrawal

#include<iostream>
using namespace std;
int main(){
int t,k;
long n,r;
cin>>t;
while(t--){
r=0;
k=0;
cin>>n;
while(n){
k=n%10;
r=r*10+k;
n=n/10;
}
cout<<r<<"\n";
}
return 0;
}
