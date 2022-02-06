//https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero/

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_map<int, vector<int>> graph;
        vector<bool> visited(50005, false);
        for(auto edge : connections){
            graph[edge[0]].push_back(edge[1]);
            //imaginary edge
            graph[edge[1]].push_back(-edge[0]);
        }
        
        int edgesReversed = 0;
        dfs(0, graph, &edgesReversed, visited);
        return edgesReversed;
    }
    
    
    void dfs(int source, unordered_map<int, vector<int>>& graph, int* edgesReversed, vector<bool>& visited){
        visited[source]=true;
        for(auto neighbor : graph[source]){
            if(!visited[abs(neighbor)]){
                if(neighbor > 0){
                    *edgesReversed = *edgesReversed + 1;
                }
                dfs(abs(neighbor), graph, edgesReversed, visited);
            }
        }
    }
};