//https://www.hackerrank.com/contests/code-blitz-001/challenges/back-to-school-days
//Author - SAJAL AGRAWAL
//@sajal.agrawal1997@gmail.com

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t,n,i,ele,len=1000000;
    int ar[len];
    cin>>t;
    while(t--){
        cin>>n;
        n=2*n*n-n;
        for(i=0;i<len;i++)ar[i]=0;
        for(i=0;i<n;i++){
            cin>>ele;
            ar[ele-1]++;
        }
        for(i=0;i<len;i++){
            if(ar[i]!=0 && ar[i]%2==1)
                cout<<(i+1)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
