//https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndexMap;
        for(int i=0;i<nums.size();i++){
            if(numToIndexMap.find(target-nums[i]) != numToIndexMap.end()){
                return vector<int>{numToIndexMap[target-nums[i]], i};
            }
            numToIndexMap[nums[i]] = i;
        }
        return vector<int>{-1, -1};
    }
};