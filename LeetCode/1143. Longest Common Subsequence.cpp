//https://leetcode.com/problems/longest-common-subsequence/

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int lcs[text1.size()+1][text2.size()+1];
        memset(lcs, 0, sizeof(lcs));
        for(int i=1;i<=text1.size();i++){
            for(int j=1;j<=text2.size();j++){
                if(text1[i-1]==text2[j-1]){
                    lcs[i][j]=lcs[i-1][j-1]+1;
                }else{
                    lcs[i][j]=max(lcs[i-1][j], lcs[i][j-1]);
                }
            }
        }
        
        return lcs[text1.size()][text2.size()];
    }
};