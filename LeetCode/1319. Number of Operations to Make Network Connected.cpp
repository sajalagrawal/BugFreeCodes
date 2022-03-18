//better solution - https://leetcode.com/problems/number-of-operations-to-make-network-connected/discuss/477679/Python-Count-the-Connected-Networks


//https://leetcode.com/problems/number-of-operations-to-make-network-connected/

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        vector<int> parent(n, -1);
        vector<int> rank(n, 0);
        int numConnectedComponent = 0;
        int numRedundantEdges = 0;
        
        for(auto connection : connections){
            if(unionByRank(connection[0], connection[1], parent, rank)){
                numRedundantEdges++;
            }
        }
        
        unordered_set<int> uniqueRoots;
        for(int i=0;i<n;i++){
            uniqueRoots.insert(findParentByPathCompression(i, parent));
        }
        numConnectedComponent = uniqueRoots.size();
        
        if(numRedundantEdges >= numConnectedComponent-1)return numConnectedComponent-1;
        return -1;
    }
    
    int findParentByPathCompression(int node, vector<int>& parent){
        if(parent[node] == -1){
            return node;
        }
        parent[node] = findParentByPathCompression(parent[node], parent);
        return parent[node];
    }
    
    
    bool unionByRank(int nodeA, int nodeB, vector<int>& parent, vector<int>& rank){
        int parentA = findParentByPathCompression(nodeA, parent);
        int parentB = findParentByPathCompression(nodeB, parent);
        
        if(parentA == parentB){
            //this edge generates a cycle
            return true;
        }
        
        if(rank[parentA] >= rank[parentB]){
            parent[parentB] = parentA;
            rank[parentA]++;
        }else{
            parent[parentA] = parentB;
            rank[parentB]++;
        }
        
        return false;
    }
    
};