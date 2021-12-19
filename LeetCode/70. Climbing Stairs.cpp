class Solution {
public:
    int dp[50]={0,1,2};
    int climbStairs(int n) {
        if (n<=2) return dp[n];
        if (dp[n]) return dp[n];
        return dp[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};
