//https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities/description/

class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        //find the min edge in the connected component which has node '1'
        //bfs starting with '1' and find min edge 
        //given: There is at least one path between 1 and n.

        unordered_map<int, vector<pair<int,int> > > graph;
        for(auto road : roads){
            int u=road[0], v=road[1], wt=road[2];
            graph[u].push_back({v, wt});
            graph[v].push_back({u, wt});
        }

        queue<int> bfsQueue;
        vector<bool> visited(n, false);
        bfsQueue.push(1);
        
        int minEdge = INT_MAX;
        while(!bfsQueue.empty()){
            int cur = bfsQueue.front();
            bfsQueue.pop();
            visited[cur]=true;

            for(auto neighbor: graph[cur]){
                if(!visited[neighbor.first]){
                    int v=neighbor.first, wt=neighbor.second;
                    minEdge = min(minEdge, wt);
                    bfsQueue.push(v);
                }
            }
        }
        return minEdge;
    }
};