//https://leetcode.com/problems/array-partition/description/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = 0;
        for(int idx=nums.size()-1;idx>=1;idx=idx-2){
            result+=nums[idx-1];
        }
        return result;
    }
};