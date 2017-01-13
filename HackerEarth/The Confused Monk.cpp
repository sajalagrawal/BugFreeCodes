//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/the-confused-monk/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b)
{
    int c;
    while(b>0)
    {
        c=a;
        a=b;
        b=c%b;
    }
    return a;
}
int main()
{
    long long res=1,f=1,g;
    int a[51],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        f*=a[i];
        f=f%1000000007;
    }
    g=a[0];
    for(int i=1;i<n;i++)
    {
        g=gcd(g,a[i]);
    }
    for(int i=0;i<g;i++)
    {
        res*=f;
        res%=1000000007;
    }    
    cout<<res;
}
