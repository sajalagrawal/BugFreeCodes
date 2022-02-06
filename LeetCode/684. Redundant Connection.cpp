//https://leetcode.com/problems/redundant-connection/
//Repeated DFS

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> graph;
        // cout<<graph[1].size();
        
        for(auto edge : edges){
            vector<bool> visited(1005, false);
            if(graph.find(edge[0]) != graph.end() && 
               graph.find(edge[1]) != graph.end()){
                // cout<<edge[0]<<" - "<<edge[1]<<endl;
                dfs(graph, visited, edge[0]);
            }
            if(visited[edge[1]]){
                return edge;
            }
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        return vector<int>{-1,-1};
    }
    
    void dfs(unordered_map<int, vector<int>>& graph, vector<bool>& visited, int source){
        visited[source]=true;
        // cout<<source<<endl;
        for(auto connection : graph[source]){
            if(!visited[connection]){
                dfs(graph, visited, connection);
            }
        }
    }
};


//https://leetcode.com/problems/redundant-connection/
//DISJOINT SET
class Solution {
public:
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> parent(1005, -1);
        vector<int> rank(1005, 0);
        for(auto edge : edges){
            if(!unionByRank(edge[0], edge[1], parent, rank)){
                return edge;
            }
        }
        return vector<int>{-1,-1};
    }
    
    int findParent(int node, vector<int>& parent){
        if(parent[node] == -1){
            return node;
        }
        parent[node] = findParent(parent[node], parent);
        return parent[node];
    }
    
    bool unionByRank(int nodeA, int nodeB, vector<int>& parent, vector<int>& rank){
        int parentA = findParent(nodeA, parent);
        int parentB = findParent(nodeB, parent);
        if(parentA == parentB){
            //adding this edge creates a cycle;
            return false;
        }
        if(rank[nodeA] > rank[nodeB]){
            parent[parentB] = parentA;
            rank[parentA]++;
        }else{
            parent[parentA] = parentB;
            rank[parentB]++;
        }
        return true;
    }
};