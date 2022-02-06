//https://leetcode.com/problems/battleships-in-a-board/

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int numBattleships = 0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j] == '.'){
                    continue;
                }
                if(board[i][j] == 'X' && i > 0 && board[i-1][j] == 'X'){
                    continue;
                }
                if(board[i][j] == 'X' && j > 0 && board[i][j-1] == 'X'){
                    continue;
                }
                numBattleships++;
            }
        }
        return numBattleships;
    }
};