//https://leetcode.com/problems/min-cost-to-connect-all-points/?envType=problem-list-v2&envId=minimum-spanning-tree

class Solution {
private:
    int findParent(int node, vector<int>& parent) {
        if(parent[node] == -1) {
            return node;
        }
        int p = findParent(parent[node], parent);
        return p;
    }

    bool unionByRank(int u, int v, vector<int>& parent, vector<int>& rank) {
        int parentU = findParent(u, parent);
        int parentV = findParent(v, parent);
        
        if(parentU == parentV) {
            return true;
        }

        if(rank[parentU] > rank[parentV]) {
            parent[parentV] = parentU;
            rank[parentU] += rank[parentV];
        } else {
            parent[parentU] = parentV;
            rank[parentV] += rank[parentU];
        }
        return false;
    }

public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        //sort edge weights asc order
        //u,v for each edge for union-find algo 
        
        //<weight, <u,v>>
        vector<pair<int, pair<int, int>>> edges;
        int n = points.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++) {
                int wt = abs(points[j][0]-points[i][0]) + abs(points[j][1]-points[i][1]);
                edges.push_back({wt, {i,j}});
            }
        }
        sort(edges.begin(), edges.end());

        int edgeCount = 0, idx = 0;
        vector<int> parent(n, -1);
        vector<int> rank(n, 1);
        int result = 0;
        //minimum spanning tree will have n-1 edges
        while(edgeCount < n-1) {
            pair<int, pair<int,int>> edge = edges[idx];
            int wt = edge.first;
            int u = edge.second.first;
            int v = edge.second.second;
            idx++;
            //if u->v creates a cycle dont include it
            if(unionByRank(u, v, parent, rank) == true) {
                //skip this edge
            } else {
                result += wt;
                edgeCount++;
            }
        }
        return result;
    }
};
