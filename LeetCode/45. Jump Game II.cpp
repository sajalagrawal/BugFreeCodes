//https://leetcode.com/problems/jump-game-ii/description/



//Greedy solution O(n)
//https://youtu.be/dJ7sWiOoK7g?si=j5oESbrNxth1k-52

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0, left=0, right=0, farthest=0;
        while(right < nums.size()-1){
            for(int i=left;i<=right;i++){
                farthest = max(farthest, i+nums[i]);
            }

            left = right+1;
            right = farthest;
            jumps++;
        }

        return jumps;
    }
};


//DP solution O(n^2)
class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), 10005);
        int n=nums.size();
        // cout<<n<<endl;
        dp[n-1]=0;
        
        for(int i=n-2;i>=0;i--){
            int endIndex = min(i+nums[i], n-1); //imp for out of bounds
            for(int j=endIndex;j>i;j--){
                dp[i] = min(dp[i], 1+dp[j]);
            }
        }

        return dp[0];
    }
};