//https://www.codechef.com/problems/CHEFSQ
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,n,f,i,count;
    cin>>t;
    while(t--){
        cin>>n;
        count=0;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>f;
        int b[f];
        for(i=0;i<f;i++)
            cin>>b[i];
 
        for(i=0;i<n;i++){
            if(a[i]==b[count])
                count++;
 
                if(count==f)
                    break;
        }
 
         if(count==f)
                cout<<"Yes\n";
            else
                cout<<"No\n";
    }
    return 0;
}
