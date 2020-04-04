class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        for(int curr=0;curr<nums.size()-1;curr++){
            if(nums[curr]==0 and nums[curr+1]){
                int temp=nums[left];
                nums[left]=nums[curr+1];
                nums[curr+1]=temp;
                left=left+1;
            }else if(nums[curr]==0 and nums[curr+1]==0){
                //do nothing
            }else if(nums[curr]){
                left=curr+1;
            }
        }
    }
};


/*
in=[1,0,2]
out=[1,2,0]
*/
