class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.empty())return 0;
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int> >dp(r, vector<int>(c,0));
        dp[r-1][c-1] = grid[r-1][c-1];
        for(int i=r-1; i>=0; i--){
            for(int j=c-1; j>=0 ;j--){
                if(i==r-1 && j<(c-1)){
                    dp[i][j] = grid[i][j] + dp[i][j+1];
                }
                else if(i<r-1){
                    if(j==c-1)dp[i][j] = grid[i][j] + dp[i+1][j];
                    else dp[i][j] = grid[i][j] + min(dp[i][j+1], dp[i+1][j]);
                    
                }
            }
        }
        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++)cout<<dp[i][j];
        //     cout<<endl;
        // }
        return dp[0][0];
    }
};
