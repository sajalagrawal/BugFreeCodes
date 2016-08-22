//https://www.codechef.com/problems/SUBINC
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<assert.h>
#define DRT()  int t; cin>>t; asst(t,1,5); while(t--)
#define asst(n,a,b) assert(n<=b and n>=a)

using namespace std;

int main()
{
    DRT(){
        int n,i,j,count=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            for(j=i;j<n-1;){
                while(a[j]<=a[j+1] && j<n-1){
                    count++;
                    j++;
                }
                if(a[j]>a[j+1]){
                    break;
                }
            }
        }
        count+=n;
        cout<<count<<"\n";
    }
    return 0;
}
