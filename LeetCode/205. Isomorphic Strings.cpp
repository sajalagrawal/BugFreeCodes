//https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        int sEncoded[260]={0}, tEncoded[260]={0};
        for(int i=0;i<s.size();i++){
            if(!sEncoded[s[i]])sEncoded[s[i]]=i+1;
            if(!tEncoded[t[i]])tEncoded[t[i]]=i+1;
            if(sEncoded[s[i]]!=tEncoded[t[i]])return false;
        }
        return true;
    }
};