//https://www.codechef.com/problems/FLOW005
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;
 
int main()
{
   int t,n,k;
   cin>>t;
   while(t--){
    cin>>n;
    k=0;
    if(n>=100){
      k=k+(n/100);
      n=n%100;
    }
    if(n>=50){
        k=k+n/50;
        n=n%50;
    }
    if(n>=10){
        k=k+n/10;
        n=n%10;
    }
     if(n>=5){
        k=k+n/5;
        n=n%5;
    }
     if(n>=2){
        k=k+n/2;
        n=n%2;
    }
     if(n==1){
        k=k+n;
    }
 
    cout<<k<<"\n";
   }
    return 0;
}
 
