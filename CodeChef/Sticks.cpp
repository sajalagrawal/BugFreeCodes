//https://www.codechef.com/problems/STICKS
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int t,n,a[1001],i;       //1 <= Ai <= 1000
    cin>>t;
    while(t--){
        cin>>n;
        int b[n],s;
        for(i=0;i<1001;i++) a[i]=0;
        for(i=0;i<n;i++){
            cin>>b[i];
            a[b[i]]++;
        }
        int max=0,smax=0; //max and second max
        for(i=0;i<1001;i++){
            if(a[i]>=4){
                max=i;
                smax=i;
            }else if(a[i]>=2){
                smax=max;
                max=i;
            }
        }
        if(max*smax>0) cout<<(max*smax)<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}
