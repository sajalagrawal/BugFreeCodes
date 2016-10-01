//https://www.codechef.com/problems/EGRANDR
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;

int main()
{
    int t,n,excellent,i,v,fail,sum;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        excellent=0;
        fail=0;
        for(i=0;i<n;i++){
            cin>>v;
            sum+=v;
            if(v==2)  fail=1;
            if(v==5) excellent=1;
        }
        if(sum>=4*n && excellent && !fail) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
