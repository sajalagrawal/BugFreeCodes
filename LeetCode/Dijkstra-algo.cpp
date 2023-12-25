////https://leetcode.com/problems/network-delay-time/
//Dijkstra's Algorithm

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
