//https://www.codechef.com/problems/UTMOPR
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int t,n,k,s,l,value;
    cin>>t;
    while(t--){
        s=0;
        cin>>n>>k;
        while(n--){
            cin>>value;
            s+=value;
        }
        while(k--){
            l=s+1;
            s=s+l;
        }
        if(l%2==0) cout<<"even\n";
        else cout<<"odd\n";
    }
    return 0;
}
