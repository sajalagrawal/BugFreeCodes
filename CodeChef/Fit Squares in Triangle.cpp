//https://www.codechef.com/problems/TRISQ
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;
int solve(int);
int main()
{
    int t,b;
    cin>>t;
    while(t--){
        cin>>b;
        cout<<solve(b)<<"\n";
    }
    return 0;
}
int solve(int b){
    b=b/2;
    return b*(b-1)/2;
}
