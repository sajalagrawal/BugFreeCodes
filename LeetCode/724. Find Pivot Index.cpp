//https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0, rightSum=0;
        for(int i=0;i<nums.size();i++)rightSum+=nums[i];
        
        for(int i=0;i<nums.size();i++){
            rightSum-=nums[i];
            if(i>0)leftSum+=nums[i-1];
            if(leftSum==rightSum)return i;
        }
        return -1;
    }
};