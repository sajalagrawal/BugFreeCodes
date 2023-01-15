//https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int result = 0, balance=0;
        for(char ch: s){
            if(ch=='R')balance++;
            if(ch=='L')balance--;
            if(!balance)result++;
        }
        return result;
    }
};