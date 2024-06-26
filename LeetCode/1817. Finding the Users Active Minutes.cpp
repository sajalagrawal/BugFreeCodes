//https://leetcode.com/problems/finding-the-users-active-minutes/description/

class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>> userLogMap;
        for(vector<int> log : logs){
            userLogMap[log[0]].insert(log[1]);
        }

        vector<int> result(k, 0);

        for(auto iter=userLogMap.begin();iter!=userLogMap.end();iter++){
            unordered_set<int> uniqueMins = iter->second;
            result[uniqueMins.size()-1]++;
        }

        return result;
    }
};


//2nd approach
class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        set< pair<int, int> > uniqueLogs;
        for(auto log : logs){
            uniqueLogs.insert(make_pair(log[0], log[1]));
        }
        unordered_map<int, int> userActionCount;
        vector<int> result(k, 0);
        for(auto iter = uniqueLogs.begin(); iter!=uniqueLogs.end(); iter++){
            int cur = userActionCount[iter->first];
            if(cur>=1)result[cur-1]--;
            result[cur]++;
            userActionCount[iter->first]++;
        }
        
        return result;
    }
};