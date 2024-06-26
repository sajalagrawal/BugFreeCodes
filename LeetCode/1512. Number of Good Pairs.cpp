//https://leetcode.com/problems/number-of-good-pairs/description/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int ans = 0;
        for(auto iter=mp.begin();iter!=mp.end();iter++){
            ans += (iter->second*(iter->second-1))/2;
        }
        return ans;
    }
};