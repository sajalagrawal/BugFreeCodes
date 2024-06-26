//https://leetcode.com/problems/longest-consecutive-sequence/description/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int num : nums){
            s.insert(num);
        }

        int maxLen = 0;
        for(auto iter=s.begin();iter!=s.end();){
            int cur = *iter, curLen=0;
            iter++;
            curLen = 1;
            cout<<cur<<endl;
            while(iter!=s.end() && (*iter)-cur == 1){
                cur = *iter;
                iter++;
                curLen++;
            }
            maxLen = max(maxLen, curLen);
        }
        return maxLen;
    }
};