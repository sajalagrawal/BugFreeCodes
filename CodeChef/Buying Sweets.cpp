//https://www.codechef.com/problems/BUYING2
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;
 
int main()
{
    int t,sum,min,n,x,i;
    cin>>t;
    while(t--){
        cin>>n>>x;
        sum=0;
        min=999999999;
        while(n--){
            cin>>i;
            if(min>i)min=i;
            sum+=i;
        }
        if(sum%x>=min)cout<<"-1\n";
        else cout<<(sum/x)<<"\n";
    }
    return 0;
}
 
