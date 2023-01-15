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
		//should check by rank[parent] instead
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