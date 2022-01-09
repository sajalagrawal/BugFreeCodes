//https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        map<int, vector<int>> graph;
        vector<int> visited(stones.size(),0);
        for(int i=0;i<stones.size();i++){
            for(int j=i+1;j<stones.size();j++){
                if(stones[i][0]==stones[j][0] or stones[i][1]==stones[j][1]){
                    graph[i].push_back(j);
                    graph[j].push_back(i);
                }
            }
        }
        
        int noOfConnectedComponents=0;
        for(int i=0;i<stones.size();i++){
            if(!visited[i]){
                dfs(i, graph, visited);
                noOfConnectedComponents++;
            }
        }
        return stones.size()-noOfConnectedComponents;
    }
    
    void dfs(int source, map<int, vector<int>>& graph, vector<int>& visited ){
        visited[source]=1;
        
        for(auto edges: graph[source]){
            if(!visited[edges]){
                dfs(edges, graph, visited);
            }
        }
    }
    
};
