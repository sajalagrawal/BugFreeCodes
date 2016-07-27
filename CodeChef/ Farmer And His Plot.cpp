//https://www.codechef.com/problems/RECTSQ
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>

using namespace std;
int gcd(int,int);
int main()
{
    int t,m,n,min;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n>m){
            min=m;
        }else{
        min=n;
        }
        int ans=(m*n)/(gcd(min,m+n-min)*gcd(min,m+n-min));
        cout<<ans<<"\n";
    }
    return 0;
}
int gcd(int min,int max){
    int r;
    r=max%min;
    while(r!=0){
        max=min;
        min=r;
        r=max%min;
    }
    return min;
}
