//https://www.codechef.com/JUNE17/problems/GOODSET/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    int t,n,i;
    cin>>t;
    int dp[110]={0};
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    dp[4]=7;
    for(i=5;i<=109;i++)dp[i]=dp[i-1]+3;
    while(t--){
        cin>>n;
        if(n==1)cout<<"1\n";
        else if(n==2)cout<<"1 2\n";
        else if(n==3)cout<<"1 2 4\n";
        else if(n==4)cout<<"1 2 4 7\n";
        else{
            for(i=1;i<=n;i++)
            cout<<dp[i]<<" ";
            cout<<"\n";
        }
    }
	return 0;
}
 