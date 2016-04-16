//https://www.codechef.com/problems/FLOW006
//Author - Sajal Agrawal
//@sajalagrawal

#include<iostream>
using namespace std;
int main(){
int t,p;
cin>>t;
long n;
while(t--){
cin>>n;
p=0;
while(n){
p=p+n%10;
n=n/10;
}
cout<<p<<"\n";
}
return 0;
} 
