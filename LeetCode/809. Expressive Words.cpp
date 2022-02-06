//https://leetcode.com/problems/expressive-words/
class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
        int count=0;
        for(string word: words){
            count += checkStretchy(s, word);
        }
        return count;
    }
    
    //checks "word" is stretchy to "s"
    int checkStretchy(string s, string word){
        int i=0,j=0;
        if(s.size()<word.size())return 0;
        while(j<word.size() or i<s.size()){
            if(j<word.size() and s[i]==word[j]){
                i++;
                j++;
            }else if(j>0 and 
                     s[i]==word[j-1] and 
                     ((i>0 and i<s.size()-1 and s[i]==s[i-1] and s[i]==s[i+1]) or 
                      (i>1 and s[i]==s[i-1] and s[i]==s[i-2]))){
                i++;
            }else{
                return 0;
            }
        }
        return 1;
    }
};