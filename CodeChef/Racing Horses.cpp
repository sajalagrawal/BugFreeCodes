//https://www.codechef.com/problems/HORSES
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int t,n,i,diff,j;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
 
        for(i=0;i<n;i++){
            cin>>a[i];
        }
 
        sort(a,a+n);
 
        diff=a[1]-a[0];
 
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i!=j){
                    if(a[i]>a[j]){
                        if(a[i]-a[j]<diff){
                            diff=a[i]-a[j];
                        }
                    }
                    else{
                        if(a[j]-a[i]<diff){
                            diff=a[j]-a[i];
                        }
                    }
                }
            }
        }
 
        cout<<diff<<"\n";
    }
    return 0;
}
