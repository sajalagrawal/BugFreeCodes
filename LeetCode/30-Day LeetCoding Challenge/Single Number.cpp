class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorOfAllNumbers=0;
        for(int i=0;i<nums.size();i++){
            xorOfAllNumbers=xorOfAllNumbers^nums[i];
        }
        return xorOfAllNumbers;
    }
};
