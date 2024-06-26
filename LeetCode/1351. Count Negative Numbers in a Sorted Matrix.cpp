//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = 0, col = grid[0].size()-1;
        int totalRows = grid.size(), totalCols = grid[0].size(), res = 0;

        //start traversing from upper right corner 
        //move left if negative
        //else move down
        while(row < totalRows && col >= 0) {
            if (grid[row][col] < 0){
                res += totalRows-row;
                col--;//move left
            } else {
                row++;//move down
            }        
        }
        return res;
    }
};