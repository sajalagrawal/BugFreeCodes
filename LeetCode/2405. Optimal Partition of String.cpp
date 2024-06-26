//https://leetcode.com/problems/optimal-partition-of-string/description/

class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> uniqueChars;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(uniqueChars.find(s[i]) != uniqueChars.end()){
                // cout<<i<<" "<<s[i]<<endl;
                ans++;
                uniqueChars.clear();
            }
            uniqueChars.insert(s[i]);
        }
        ans++;
        return ans;
    }
};