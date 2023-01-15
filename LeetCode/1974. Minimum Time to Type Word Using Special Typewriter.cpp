//https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/description/

class Solution {
public:
    int minTimeToType(string word) {
        int time = word.size();
        char pointer='a';
        for(int idx=0;idx<word.size();idx++){
            int diff = abs(word[idx]-pointer);
            time += min(diff, 26-diff);
            pointer=word[idx];
        }
        return time;
    }
};