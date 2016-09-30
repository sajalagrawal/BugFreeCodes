//https://www.codechef.com/problems/PPSUM
//Author - Sajal Agrawal
//@sajalagrawal


#include <iostream>
 
using namespace std;
 
int main()
{
    int t,d,n;
    cin>>t;
    while(t--){
        cin>>d>>n;
        while(d--){
            n=n*(n+1)/2;
        }
        cout<<n<<"\n";
    }
    return 0;
}
 
