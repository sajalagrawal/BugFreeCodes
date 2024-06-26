//https://leetcode.com/problems/word-search/

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        // unordered_set<pair<int, int>, hashFunction> seen;
        int rows=board.size(), cols=board[0].size(), wordIndex=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(dfs(i, j, wordIndex, board, word)){
                    return true;
                }
            }
        }
        return false;
    }

    bool dfs(int i, int j, int wordIndex, vector<vector<char>>& board, string word){
        if(wordIndex == word.size())return true;
        if( i<0 
            || j<0
            || i>=board.size()
            || j>=board[i].size()
            || board[i][j]!=word[wordIndex]
        ) return false;
        

        // seen.insert({i,j});
        board[i][j]='*';
        bool res = dfs(i+1, j, wordIndex+1, board, word) 
        || dfs(i-1, j, wordIndex+1, board, word)
        || dfs(i, j+1, wordIndex+1, board, word)
        || dfs(i, j-1, wordIndex+1, board, word);

        // seen.erase({i,j});
        board[i][j] = word[wordIndex];
        return res;

    }
};
