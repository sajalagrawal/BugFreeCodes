//https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, vector<int>> mp;
        for(int i=0;i<groupSizes.size();i++){
            mp[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> groups;
        for(auto iter=mp.begin();iter!=mp.end();iter++){
            int grpSize = iter->first;
            vector<int> grp;
            for(auto element: iter->second){
                //make a single group           
                grp.push_back(element);
                grpSize--;
                if(grpSize == 0) {
                    groups.push_back(grp);
                    //empty vector
                    grp.clear();
                    grpSize = iter->first;
                }
            }
        }
        return groups;
    }
};