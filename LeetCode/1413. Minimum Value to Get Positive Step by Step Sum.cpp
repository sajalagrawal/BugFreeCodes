//https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/description/

class Solution {
public:
    
    int mod(int x){
        if(x<0)return -x;
        return x;
    }
    int minStartValue(vector<int>& nums) {
        int sum=0,res=1,pos=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0){
        //         pos=1;
        //         break;
        //     }
        // }
        // if(pos==0)return 1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum<0)res=max(res, mod(sum)+1);
        }
        return res;
    }
};
