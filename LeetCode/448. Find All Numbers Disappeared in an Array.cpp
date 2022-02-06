//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
//O(n) time O(1) space solution

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missingNumbers;
        if(nums.size() == 0){
            return missingNumbers;
        }
        for(int i=0;i<nums.size();i++){
            int idx = abs(nums[i]) - 1;
            nums[idx] = nums[idx] > 0 ? -nums[idx] : nums[idx];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                missingNumbers.push_back(i+1);
            }
        }
        return missingNumbers;
    }
};