//https://leetcode.com/problems/find-if-path-exists-in-graph/
//BFS

class Solution {
public:
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int, vector<int>> graph;
        for(auto edge : edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        queue<int> bfsQueue;
        bool visited[n];
        memset(visited, false, sizeof(visited));
        visited[start]=true;
        bfsQueue.push(start);
        while(!bfsQueue.empty()){
            int top = bfsQueue.front();
            bfsQueue.pop();
            for(auto connection : graph[top]){
                if(!visited[connection]){
                    bfsQueue.push(connection);
                    visited[connection]=true;
                }
            }
        }
        
        return visited[end];
    }
};



//https://leetcode.com/problems/find-if-path-exists-in-graph/
//DFS

class Solution {
public:
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int, vector<int>> graph;
        for(auto edge : edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        vector<bool> visited(n, false);
        
        dfs(graph, visited, start);
        
        return visited[end];
    }
    
    void dfs(unordered_map<int, vector<int>>& graph, vector<bool>& visited, int source){
        visited[source] = true;
        for(auto connection : graph[source]){
            if(!visited[connection]){
                dfs(graph, visited, connection);
            }
        }
    }
};



//https://leetcode.com/problems/find-if-path-exists-in-graph/
//DISJOINT SET

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> parent(n+5, 0);
        vector<int> rank(n+5, 0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
            // rank[i]=1;
        }
        
        for(auto edge : edges){
            unionByRank(edge[0], edge[1], parent, rank);
            // cout<<edge[0]<<" "<<edge[1]<<endl;
            // cout<<parent[source]<<" -- "<<parent[destination]<<endl;
            if(parent[source] == parent[destination]){
                return true;
            }
        }
        // for(int i=0;i<=n;i++){
        //     cout<<parent[i]<<" - "<<rank[i]<<endl;
        // }
        return findParent(source, parent) == findParent(destination, parent);
    }
    
    int findParent(int node, vector<int>& parent){
        if(parent[node] == node){
            return node;
        }
        parent[node] = findParent(parent[node], parent);
        return parent[node];
    }
    
    void unionByRank(int nodeA, int nodeB, vector<int>& parent, vector<int>& rank){
        int parentA = findParent(nodeA, parent);
        int parentB = findParent(nodeB, parent);
        if(parentA == parentB){
            //adding this edge creates a cycle
            return;
        }
        if(rank[nodeA] >= rank[nodeB]){
            parent[parentB] = parentA;
            rank[parentA]++;
        }else{
            parent[parentA] = parentB;
            rank[parentB]++;
        }
        return;
    }
};
