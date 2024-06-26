//https://leetcode.com/problems/count-servers-that-communicate/description/

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> nodeCountRow(grid.size(), 0);
        vector<int> nodeCountCol(grid[0].size(), 0);

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    nodeCountRow[i]++;
                    nodeCountCol[j]++;
                }
            }
        }
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] && (nodeCountRow[i]>1 || nodeCountCol[j]>1)){
                    res++;
                }
            }
        }
        return res;
    }
};