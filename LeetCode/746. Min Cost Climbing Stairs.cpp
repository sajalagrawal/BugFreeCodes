class Solution {
public:
    int dp[1005];
    int minCostClimbingStairs(vector<int>& cost) {
        dp[0]=0;
        dp[1]=0;
        
        return solve(cost, cost.size());
    }
    
    int solve(vector<int>& cost, int idx) {
        if(idx<=1) return 0;
        if(dp[idx]) return dp[idx];
        return dp[idx]=min(solve(cost, idx-1)+cost[idx-1], 
                           solve(cost, idx-2)+cost[idx-2]);
        
    }
};
