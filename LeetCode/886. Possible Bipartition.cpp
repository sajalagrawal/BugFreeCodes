//https://leetcode.com/problems/possible-bipartition/

class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        unordered_map<int, vector<int>> graph;
        
        //0 = not colored, 1 and -1 are two possible colors 
        vector<int> colors(n+1, 0);
    
        for(auto edge : dislikes){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        bool partitionPossible = true;
        for(int i=1;i<=n;i++){
            if(!colors[i]){
                partitionPossible = partitionPossible && dfs(i, graph, colors, 1);
                if(!partitionPossible)return false;
            }
        }
        return true;   
    }
    
    bool dfs(int source, unordered_map<int, vector<int>>& graph, vector<int>& colors, int color){
        colors[source] = color;
        bool partitionPossible = true;
        for(auto neighbor : graph[source]){
            if(!colors[neighbor]){
                partitionPossible = partitionPossible && dfs(neighbor, graph, colors, -1*color);
                if(!partitionPossible)return false;
            }
            if(colors[neighbor]==color){
                return false;
            }
        }
        return true;
    }
};