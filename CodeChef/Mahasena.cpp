//https://www.codechef.com/problems/AMR15A
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int n,even=0,odd=0,s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s%2==0) even++;
        else odd++;
    }
    if(even>odd) cout<<"READY FOR BATTLE\n";
    else cout<<"NOT READY\n";
    return 0;
}
