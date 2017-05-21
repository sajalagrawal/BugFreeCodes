//http://www.geeksforgeeks.org/dynamic-programming-set-4-longest-common-subsequence/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main() {
    int m,n,i,j;
    string s1,s2;
    cin>>s1>>s2;
    m=s1.size(),n=s2.size();
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
    cout<<dp[m][n]<<"\n";
	return 0;
}

