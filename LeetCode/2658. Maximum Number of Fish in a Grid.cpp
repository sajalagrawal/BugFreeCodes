//https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/description/


class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int maxFishes = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] > 0){
                    maxFishes = max(maxFishes, dfs(i, j, grid));
                }
            }
        }
        return maxFishes;
    }

    //flood fill
    int dfs(int i, int j, vector<vector<int>>& grid) {
        if(i<0 
        || j<0 
        || i>=grid.size() 
        || j>=grid[i].size() 
        || grid[i][j]==0)return 0;

        int fishesInCurrentCell = grid[i][j];
        grid[i][j]=0;

        return fishesInCurrentCell
        + dfs(i+1, j, grid)
        + dfs(i-1, j, grid)
        + dfs(i, j+1, grid)
        + dfs(i, j-1, grid);
    }
};