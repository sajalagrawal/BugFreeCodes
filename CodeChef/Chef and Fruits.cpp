//https://www.codechef.com/problems/FRUITS
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,n,m,k,diff;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        while(k){
            if(n>m){
                m=m+1;
                k=k-1;
            }
 
            else if(n<m){
                n=n+1;
                k=k-1;
            }
 
            else if(n==m){
                break;
            }
        }
 
        if(n>m)
            diff=n-m;
        else
            diff=m-n;
 
        cout<<diff<<"\n";
    }
    return 0;
}
 
