//https://www.codechef.com/problems/CHEFARRP
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<assert.h>
#define DRT() int t; cin>>t; asst(t,1,50); while(t--)
#define asst(n,a,b) assert(n>=a and n<=b)
using namespace std;

int main()
{
    DRT(){
        int n,i,j,count=0,s,p;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            s=0;
            p=1;
            for(j=i;j<n;j++){
                s=s+a[j];
                p=p*a[j];
                if(s==p){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
