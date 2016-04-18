//https://www.codechef.com/problems/PRB01
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;
 
int main()
{
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=2;i<n;i++){
            if(n%i==0){
                cout<<"no\n";
                break;
            }
        }
        if(i==n)
            cout<<"yes\n";
    }
    return 0;
}
 
