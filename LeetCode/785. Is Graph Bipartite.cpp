//https://leetcode.com/problems/is-graph-bipartite/

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        //color 1 or 2
        vector<int> colors(graph.size()+5, -1);
        
        bool isBiPartite = true;
        for(int i=0;i<graph.size();i++){
            if(colors[i]==-1){
                isBiPartite = isBiPartite && dfs(i, graph, colors, 1);
                if(!isBiPartite)return false;
            }
        }
        return isBiPartite;
    }
    
    bool dfs(int source, vector<vector<int>>& graph, vector<int>& colors, int color){
        bool isBiPartite = true;
        colors[source] = color;
        
        for(auto neighbor : graph[source]){
                if(colors[neighbor] == -1){
                    isBiPartite = isBiPartite && dfs(neighbor, graph, colors, color==1?0:1);
                }else{
                    if(colors[neighbor] == color){
                        return false;
                    }
                }
        }
        return isBiPartite;
        
    }
};