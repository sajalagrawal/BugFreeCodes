//https://leetcode.com/problems/all-paths-from-source-to-target/

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {        
        vector<int> currentPath;
        vector<vector<int>> result;
        
        dfs(0, graph, currentPath, result);
        return result;
    }
    
    
    //vector currentPath is passed by value
    void dfs(int source, 
            vector<vector<int>>& graph,
            vector<int> currentPath,
            vector<vector<int>>& result) {
        // cout<<source<<endl;
        if(source == graph.size()-1){
            currentPath.push_back(source);
            result.push_back(currentPath);
            return;
        }
        
        currentPath.push_back(source);
        for(auto neighbor : graph[source]){
            // cout<<source<<" "<<neighbor<<endl;
            dfs(neighbor, graph, currentPath, result);
        }
    }
    
    
};