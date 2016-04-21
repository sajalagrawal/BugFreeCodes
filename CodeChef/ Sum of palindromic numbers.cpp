//https://www.codechef.com/problems/SPALNUM
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,l,r,sum,k,l2,rev,l3;
    cin>>t;
    while(t--){
        cin>>l>>r;
        sum=0;
        for(;l<=r;l++){
            l2=l;
            l3=l;
            rev=0;
            while(l2){
            k=l2%10;
            rev=rev*10+k;
            l2=l2/10;
        }
        if(l3==rev)
            sum=sum+rev;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
