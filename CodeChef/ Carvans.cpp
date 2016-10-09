//https://www.codechef.com/problems/CARVANS
//Author - Sajal Agrawal
//@sajalagrawal

//WAY-1
#include <iostream>
 
using namespace std;
 
int main()
{
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],ans=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=1;i<n;i++){
            if(a[i]>a[i-1]){
                ans++;
                a[i]=a[i-1];
            }
        }
        ans=n-ans;
        cout<<ans<<"\n";
    }
    return 0;
}
  
//WAY-2
/*
#include <iostream>
 
using namespace std;
 
int main()
{
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],ans=1;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=1;i<n;i++){
            if(a[i]>a[i-1]){
                a[i]=a[i-1];
            }else if(a[i]<=a[i-1]){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
*/
