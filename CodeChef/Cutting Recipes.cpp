//https://www.codechef.com/problems/RECIPE
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
int gcd(int,int);
int main()
{
    int t,n,i,div;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        div=a[0];
        for(i=1;i<n;i++)
            div=gcd(div,a[i]);
        for(i=0;i<n;i++)
            a[i]=a[i]/div;
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
 
    return 0;
}
 
int gcd(int a,int b){
    int g=1,min,i;
    if(a<b)
        min=a;
    else
        min=b;
    for(i=1;i<=min;i++){
        if(a%i==0 && b%i==0)
            g=i;
    }
    return g;
}  
