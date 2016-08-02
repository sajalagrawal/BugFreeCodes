//https://www.codechef.com/problems/MOVIEWKN
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int l[n],r[n],lr[n],index,rmax=0,max=0;
        for(i=0;i<n;i++)
            cin>>l[i];
        for(i=0;i<n;i++)
            cin>>r[i];
        for(i=0;i<n;i++)
            lr[i]=l[i]*r[i];
        for(i=0;i<n;i++){
            if(lr[i]>max){
                max=lr[i];
                rmax=r[i];
                index=i;
            }else if(lr[i]==max){
                if(r[i]>rmax){
                    rmax=r[i];
                    index=i;
                }
            }
        }
        cout<<index+1<<"\n";
    }
    return 0;
}
