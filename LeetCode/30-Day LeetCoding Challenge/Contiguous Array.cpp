class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxLen = 0, count = 0;
        map<int,int> mp;
        mp[0]=-1;
        for(int idx=0;idx<nums.size();idx++){
            if(nums[idx] == 0){
                count--;
            }else if(nums[idx] == 1){
                count++;
            }
            
            auto itr = mp.find(count);
            if(itr == mp.end()){              //key not found in the map
                mp[count] = idx;
            }else{
                maxLen = max(maxLen, idx - mp[count]);
                //cout<<"maxLen="<<maxLen<<endl;
            }
        }
        
        return maxLen;
    }
};

/*
00100011
ans = 6
*/
