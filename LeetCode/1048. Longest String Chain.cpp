//https://leetcode.com/problems/longest-string-chain/
class Solution {
public:
    
    static bool compareLength(string s1, string s2){
        return s1.size() < s2.size();
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), compareLength);
        map<string, int> wordChainLength;
        
        int res=1;
        for(string word : words){
            // cout<<word<<endl;
            wordChainLength[word]=1;
            for(int i=0;i<word.size();i++){
                string predecessor = word.substr(0,i)+word.substr(i+1, word.size()-i-1);
                // cout<<predecessor<<endl;
                if(predecessor.size() and wordChainLength[predecessor]){
                    wordChainLength[word]=max(wordChainLength[word], wordChainLength[predecessor]+1);
                    res=max(res, wordChainLength[word]);
                }
            }
        }
        
        return res;
    }
};