//https://www.codechef.com/problems/PALL01
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,n,rev,k,n2;
    cin>>t;
    while(t--){
        cin>>n;
        n2=n;
        rev=0;
        while(n){
            k=n%10;
            rev=rev*10+k;
            n=n/10;
        }
        if(rev==n2)
            cout<<"wins\n";
        else
            cout<<"losses\n";
    }
    return 0;
}
