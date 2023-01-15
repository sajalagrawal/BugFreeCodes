//https://leetcode.com/problems/di-string-match/description/

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int level = 0;
        //map<level, list of indexes at that level>
        map<int, vector<int>> mp;
        mp[0].push_back(0);
        for(int idx=0;idx<s.size();idx++){
            if(s[idx]=='I') level++;
            else if(s[idx]=='D')level--;
            mp[level].push_back(idx+1);
        }
        int n=s.size()+1;
        vector<int> answer(n, -1);
        int counter=0;
        for(auto entry:mp){
            // cout<<entry.first<<endl;
            for(int idx:entry.second){
                answer[idx]=counter++;
            }
        }
        return answer;
    }
};