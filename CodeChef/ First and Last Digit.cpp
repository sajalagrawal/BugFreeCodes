//https://www.codechef.com/problems/FLOW004
//Author - Sajal Agrawal
//@sajalagrawal

#include<iostream>
using namespace std;
main()
{
    int t,s;
    long n;
    cin>>t;
    while(t--){
        cin>>n;
        s=0;
        s=s+n%10;
        while(n/10){
         n=n/10;
        }
        s=s+n;
        cout<<s<<"\n";
    }
    return 0;
}
