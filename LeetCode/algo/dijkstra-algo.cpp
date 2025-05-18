////https://leetcode.com/problems/network-delay-time/
//Dijkstra's Algorithm - Single Source Shortest Path - No negative edges

//lecture https://youtu.be/OGsPQy-lM1w?si=njOSssd9hkA35HVu 

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int, vector<pair<int, int>>> graph;
        for(auto edge: times){
            graph[edge[0]].push_back(make_pair(edge[1], edge[2]));
        }
        
        vector<bool> visited(n+1, false); //nodes whose min distance has been fixed - rename to processed
        vector<int> minDistance(n+1, INT_MAX);
        minDistance[k] = 0;
        //minHeap of <distance-from-source, node>
        priority_queue<pair<int, int>, 
                        vector<pair<int, int>>, 
                        greater<pair<int, int>>> minHeap;
        
        //source node is k, distance to k = 0
        minHeap.push(make_pair(0, k));

        while(!minHeap.empty()){
            pair<int, int> nextNearest = minHeap.top();
            minHeap.pop();
            int u = nextNearest.second;
            int dis = nextNearest.first;
            //optimization?? - u is already processed before with a lesser distance so no need to revisit u
            if(visited[u]=true) continue;
            visited[u]=true;
            
            //each connection u->v is a pair<int, int>
            for(auto connection : graph[u]){
                int v = connection.first;
                int wt = connection.second;
                if(!visited[v]){
                    if (minDistance[v] > dis + wt) {
                        minDistance[v] = dis + wt;
                        minHeap.push(make_pair(minDistance[v], v));
                    }
                }
            }

        }
        int maxTimeOnAPath = 0;
        //if any node is not visited return -1
        //node numbering starts from 1
        for(int i=1;i<minDistance.size();i++){
            if(minDistance[i] == INT_MAX) return -1;
            maxTimeOnAPath = max(maxTimeOnAPath, minDistance[i]);
        }
        return maxTimeOnAPath;
    }

    
};

