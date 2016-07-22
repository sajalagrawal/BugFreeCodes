//https://www.codechef.com/problems/TSORT/
//Author - Sajal Agrawal
//@sajalagrawal

//Counting Sort algorithm
#include <iostream>
 
using namespace std;
 
int main()
{
    int a[1000001]={0,},n,t,i;
    cin>>t;
    while(t--){
        cin>>n;
        a[n]++;
    }
    for(i=0;i<1000001;i++){
        while(a[i]>0){
            cout<<i<<"\n";
            a[i]--;  //for repeated occurrences
        }
    }
    return 0;
}
