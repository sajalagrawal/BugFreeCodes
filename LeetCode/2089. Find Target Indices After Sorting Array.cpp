//https://leetcode.com/problems/find-target-indices-after-sorting-array/description/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smallerNums = 0, targetCount = 0;
        for (auto num: nums) {
            if (num < target) {
                smallerNums++;
            }
            if (num == target){
                targetCount++;
            }        
        }
        vector<int> indices;
        while (targetCount--){
            indices.push_back(smallerNums++);
        }
        return indices;
    }
};