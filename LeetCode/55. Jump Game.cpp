//https://leetcode.com/problems/jump-game/description/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastPossibleIndex = nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(i+nums[i] >= lastPossibleIndex){
                lastPossibleIndex = i;
            }
        }
        return lastPossibleIndex==0;
    }
};