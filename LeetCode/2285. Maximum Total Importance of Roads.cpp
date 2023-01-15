//https://leetcode.com/problems/maximum-total-importance-of-roads/

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> degree(n, 0);
        for(auto road: roads){
            degree[road[0]]++;
            degree[road[1]]++;
        }
        sort(degree.begin(), degree.end(), greater<int>());
        
        long long importance=0;
        for(int i=0;i<n;i++){
            importance += degree[i]*(n-i);
        }
        return importance;
    }
};
