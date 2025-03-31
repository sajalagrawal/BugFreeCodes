//https://leetcode.com/problems/count-the-number-of-complete-components/?envType=daily-question&envId=2025-03-22

class DisjointUnion {
public:
    vector<int> parent;
    vector<int> rank;

    DisjointUnion(int n) : parent(n, -1), rank(n, 1) {

    }

    int findParent(int node) {
        if(parent[node] == -1) return node;
        parent[node] = findParent(parent[node]);
        return parent[node];
    }

    void unionByRank(int a, int b) {
        int parentA = findParent(a);
        int parentB = findParent(b);
        if(parentA == parentB) {
            return;
        }

        if(rank[parentA] > rank[parentB]) {
            parent[parentB] = parentA;
            rank[parentA] += rank[parentB];
        }else {
            parent[parentA] = parentB;
            rank[parentB] += rank[parentA];
        }
        return;
    }

};

class Solution {

public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        DisjointUnion dsu(n);
        unordered_map<int, int> componentParentToEdgesMap;
        
        // Connect components using edges
        for(vector<int>& edge : edges) {
            int u = edge[0], v = edge[1];
            dsu.unionByRank(u, v);
        }

        // Count edges in each component
        for(vector<int>& edge : edges) {
            int u = edge[0], v = edge[1];
            int parentU = dsu.findParent(u);
            componentParentToEdgesMap[parentU]++;
        }
        
        // Check if each component is complete
        int res = 0;
        for(int i=0;i<n;i++){
            if(dsu.parent[i] == -1) {
                int edges = componentParentToEdgesMap[i];
                int nodes = dsu.rank[i];
                if(edges == (nodes*(nodes-1))/2) {
                    res++;
                }
            }
            
        }
        return res;
    }
};

//n(n-1)/2 edges in a component
//find diff components
//find num of nodes in each component
//for each edge - map<edge to component> 
//map<componentid, num of nodes>
//map<componentid, edgeCount>
//each component should have n*(n-1)/2 edges

//input could be like [1,2], [3,4], [1,3] -- 2 components may be merged later on
