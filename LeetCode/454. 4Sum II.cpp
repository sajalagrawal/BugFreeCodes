//AMZN
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int i=0,j=0,count=0;
        map<int,int> mp;
        for(i=0;i<nums1.size();i++){
            for(j=0;j<nums2.size();j++){
                mp[nums1[i]+nums2[j]]++;
            }
        }
        
        for(i=0;i<nums3.size();i++){
            for(j=0;j<nums4.size();j++){
                if(mp[-1*(nums3[i]+nums4[j])] > 0){
                    count+=mp[-1*(nums3[i]+nums4[j])];
                }
            }
        }
        return count;
    }
};
