//https://leetcode.com/problems/triangle/description/


//O(2n) space
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int rows=triangle.size(), cols=triangle.size();
        if(rows == 1)return triangle[0][0];

        int dp[2][cols];
        memset(dp, 0, sizeof(dp));
        dp[0][0]=triangle[0][0];
        for(int i=1;i<rows;i++){
            for(int j=0;j<=i;j++){
                if(j==0) dp[1][j] = triangle[i][j] + dp[0][j];
                else if(j==i) dp[1][j] = triangle[i][j] + dp[0][j-1];
                else dp[1][j] = triangle[i][j] + min(dp[0][j], dp[0][j-1]);
            }
            for(int j=0;j<=i;j++){
                dp[0][j]=dp[1][j];
            }
        }
        int minimum=dp[1][0];
        for(int j=0;j<cols;j++){
            minimum=min(minimum, dp[1][j]);
        }
        return minimum;
    }
};


//O(n^2) space
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int rows=triangle.size(), cols=triangle.size();
        int dp[rows][cols];
        memset(dp, 0, sizeof(dp));
        dp[0][0]=triangle[0][0];
        for(int i=1;i<rows;i++){
            for(int j=0;j<=i;j++){
                if(j==0) dp[i][j] = triangle[i][j] + dp[i-1][j];
                else if(j==i) dp[i][j] = triangle[i][j] + dp[i-1][j-1];
                else dp[i][j] = triangle[i][j] + min(dp[i-1][j], dp[i-1][j-1]);
            }
        }
        int minimum=dp[rows-1][0];
        for(int j=0;j<cols;j++){
            minimum=min(minimum, dp[rows-1][j]);
        }
        return minimum;
    }
};