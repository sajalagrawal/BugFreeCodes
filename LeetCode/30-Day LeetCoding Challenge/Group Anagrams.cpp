#include<bits/stdc++.h>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string> >  mp;
        vector<vector<string>> res;
        for(string str : strs){
            string copy = str;
            sort(str.begin(),str.end());
            mp[str].push_back(copy);   
        }
        
        for(auto entry : mp){
            res.push_back(entry.second);
        }
        return res; 
    }
};



// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         map<string, vector<string> >  mp;
//         vector<vector<string>> res;
//         for(string str : strs){
//             string copy = str;
//             sort(str.begin(),str.end());
//             mp[str].push_back(copy);   
//         }
        
//         for(auto entry : mp){
//             vector<string> v;
//             for(auto e : entry.second){
//                 //cout<<e<<endl;
//                 v.push_back(e);
//             }
//             res.push_back(v);
//         }
//         return res; 
//     }
// };
