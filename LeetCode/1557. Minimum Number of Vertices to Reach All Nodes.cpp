//https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        int indegree[n];
        memset(indegree, 0, sizeof(indegree));
        for(auto edge : edges){
            indegree[edge[1]]++;
        }
        vector<int> vertices;
        for(int i=0;i<n;i++){
            if(!indegree[i]){
                vertices.push_back(i);
            }
        }
        return vertices;
    }
};