//https://leetcode.com/problems/number-of-provinces/

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int numConnectedComponents = 0;
        vector<bool> visited(isConnected.size(), false);
        for(int i=1;i<=isConnected.size();i++){
            if(!visited[i]){
                dfs(i, isConnected, visited);
                numConnectedComponents++;
            }
        }
        
        return numConnectedComponents;
    }
    
    void dfs(int src, vector<vector<int>>& isConnected, vector<bool>& visited){
        visited[src]=true;
        for(int i=0;i<isConnected[src-1].size();i++){
            if(isConnected[src-1][i] && !visited[i+1]){
                dfs(i+1, isConnected, visited);
            }
        }
    }
};