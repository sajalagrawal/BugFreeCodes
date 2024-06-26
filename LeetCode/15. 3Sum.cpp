//https://leetcode.com/problems/3sum/description/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size()-2;i++){
            if(i && nums[i]==nums[i-1])continue;
            int low = i+1, high = nums.size() - 1;
            while(low<high){
                if(nums[i]+nums[low]+nums[high] == 0){
                    result.push_back({nums[i], nums[low], nums[high]});
                    low++;
                    while(low<high && nums[low] == nums[low-1]) low++;
                    high--;
                    while(high>low && nums[high] == nums[high+1]) high--;
                } else if(nums[i]+nums[low]+nums[high] > 0){
                    high--;
                    while(high>low && nums[high] == nums[high+1]) high--;
                } else {
                    low++;
                    while(low<high && nums[low] == nums[low-1]) low++;
                }
            }
        }
        return result;
    }
};


//nums =[-2,0,0,2,2]
//nums = [0 0 0 0 0]