//http://www.spoj.com/problems/AIBOHP/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        s2=s1;
        reverse(s1.begin(),s1.end());
        int m,n,i,j;
        m=n=s1.size();
        int dp[m+1][n+1];
        for(i=0;i<=m;i++){
            for(j=0;j<=n;j++){
                if(i==0 or j==0)dp[i][j]=0;
                else if(s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        cout<<(m-dp[m][n])<<"\n";
    }
	return 0;
}
