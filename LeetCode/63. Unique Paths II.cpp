//https://leetcode.com/problems/unique-paths-ii/description/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows=obstacleGrid.size(), cols=obstacleGrid[0].size();
        vector<vector<int>> dp(rows, vector<int>(cols, 0));

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(obstacleGrid[i][j])  dp[i][j] = 0;
                else if(i==0 && j==0) dp[i][j] = 1;
                else if(j==0) dp[i][j] = dp[i-1][j];
                else if(i==0) dp[i][j] = dp[i][j-1];
                else dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }

        return dp[rows-1][cols-1];
    }
};