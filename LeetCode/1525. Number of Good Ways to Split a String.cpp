//GOOGL
#include<bits/stdc++.h>
class Solution {
public:
    int numSplits(string s) {
        int left[26]={0}, right[26]={0}, left_unq=0, right_unq=0, i, res=0;
        for(i=0;i<s.size();i++){
            if(right[s[i]-'a'] == 0)right_unq++;
            right[s[i]-'a']++;
        }
                
        for(i=0;i<s.size();i++){
            if(left[s[i]-'a'] == 0)left_unq++;
            left[s[i]-'a']++;
            right[s[i]-'a']--;
            if(right[s[i]-'a'] == 0)right_unq--;
            
            if(left_unq == right_unq)res++;
            
        }
        return res;
    }    
};
