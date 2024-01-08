////https://leetcode.com/problems/network-delay-time/
//Dijkstra's Algorithm

//lecture https://youtu.be/OGsPQy-lM1w?si=njOSssd9hkA35HVu 

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int, vector<pair<int, int>>> graph;
        for(auto edge: times){
            graph[edge[0]].push_back(make_pair(edge[1], edge[2]));
        }
        
        vector<bool> visited(n+1, false); //can we just say that all nodes whose distance is INT_MAX arent visited ? 
        vector<int> minDistance(n+1, INT_MAX);
        minDistance[k] = 0;
        //minHeap of <distance-from-source, node>
        priority_queue<pair<int, int>, 
                        vector<pair<int, int>>, 
                        greater<pair<int, int>>> minHeap;
        
        //source node is k, distance to k = 0
        minHeap.push(make_pair(0, k));
        visited[k]=true;

        while(!minHeap.empty()){
            pair<int, int> nextNearest = minHeap.top();
            minHeap.pop();
            int u = nextNearest.second;
            visited[u]=true;
            
            //each connection u->v is a pair<int, int>
            for(auto connection : graph[u]){
                int v = connection.first;
                int wt = connection.second;
                if(!visited[v]){
                    if (minDistance[v] > minDistance[u] + wt) {
                        minDistance[v] = minDistance[u] + wt;
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



//********************** 2nd SOLUTION ************************

//this solution didnt use vector<int> visited
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int, vector<pair<int,int>>> graph;
        for(auto time : times){
            graph[time[0]].push_back(make_pair(time[1], time[2]));
        }
        
        //distance to all nodes from k
        vector<int> distance(n+1, INT_MAX);
        distance[k]=0;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        minHeap.push(make_pair(0, k));
        
        while(!minHeap.empty()){
            pair<int,int> node = minHeap.top();
            minHeap.pop();
            int u = node.second;
            
            for(auto edge : graph[u]){
                int v = edge.first;
                int wt = edge.second;
                if(distance[v] > distance[u]+wt){
                    distance[v] = distance[u]+wt;
                    // cout<<"v="<<v<<"dis="<<distance[v]<<endl;
                    minHeap.push(make_pair(distance[v], v));
                }
            }
        }
        int maxTime = 0;
        for(int i=1;i<distance.size();i++){
            if(distance[i]==INT_MAX)return -1;
            maxTime = max(maxTime, distance[i]);
        }
        return maxTime;
    }
};
