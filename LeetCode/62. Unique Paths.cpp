//https://leetcode.com/problems/unique-paths/description/

class Solution {
public:
    int uniquePaths(int m, int n) {
        //nCr = n-1Cr-1 + n-1Cr
        //ans is m+n-2Cm-1 = m+n-2Cn-1
        int rows = m+n-1, cols = min(m, n);
        int dp[rows][cols];
        memset(dp, 0, sizeof(dp));
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<=min(i, cols-1);j++){
                if(j==0 || j==i)dp[i][j]=1;
                else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            }
        }

        return dp[m+n-2][cols-1];
    }
};