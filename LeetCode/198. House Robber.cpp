//https://leetcode.com/problems/house-robber/

class Solution {
public:
    
    //order -> prev2, prev1, curr
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0],nums[1]);
        int prev1=0,prev2=0,curr=0;
        prev2=nums[0];
        prev1=max(nums[0], nums[1]);
        
        for(int i=2;i<nums.size();i++){
            curr = max(nums[i]+prev2, prev1);
            prev2=prev1;
            prev1=curr;
        }
        return curr;
    }
};
