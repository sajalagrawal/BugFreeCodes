//https://leetcode.com/problems/single-number-ii/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++){
            int count = 0; //count of 1st at ith bit position

            for(auto num: nums){
                int rightShiftNum = (num >> i);
                count+= (rightShiftNum & 1);
            }
            // cout<<count<<endl;
            if(count % 3){
                ans = ans | (1 << i);
            }
        }
        return ans;
    }
};