//https://leetcode.com/problems/number-of-enclaves/description/

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        //traverse all boundary cells & flood fill for land cells on boundary
        
        //row 0 & last row
        for(int c=0;c<grid[0].size();c++){
            dfs(0, c, grid);
            dfs(grid.size()-1, c, grid);
        }
        //col 0 and last col
        for(int r=0;r<grid.size();r++){
            dfs(r, 0, grid);
            dfs(r, grid[0].size()-1, grid);
        }
        int res = 0;
        //check remaining land cells after flood fill
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 1){
                    res++;
                }
            }
        }
        return res;
    }


    //floodFill
    void dfs(int row, int col, vector<vector<int>>& grid){
        if(row<0 
            || row>grid.size()-1 
            || col<0
            || col>grid[row].size()-1
            || grid[row][col] == 0
        ) return;
        grid[row][col] = 0;
        dfs(row+1, col, grid);
        dfs(row-1, col, grid);
        dfs(row, col-1, grid);
        dfs(row, col+1, grid);
        return;
    }
};