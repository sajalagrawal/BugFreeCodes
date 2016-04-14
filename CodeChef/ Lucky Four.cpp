//https://www.codechef.com/problems/LUCKFOUR
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;
 
int main()
{
    int t,o,k;
    cin>>t;
    long n;
    while(t--){
        cin>>n;
        o=0;
        k=0;
        while(n){
            k=n%10;
            if(k==4)
                o++;
            n=n/10;
        }
        cout<<o<<"\n";
    }
    return 0;
}
