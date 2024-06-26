//https://leetcode.com/problems/surrounded-regions/description/

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                //start a DFS from boundary nodes
                if(i==0 || j==0 || i==board.size()-1 || j==board[i].size()-1){
                    if(board[i][j]=='O') dfs(i, j, board);
                }
            }
        }

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]=='O') board[i][j]='X';
                else if(board[i][j]=='Z') board[i][j]='O';
            }
        }
    }

    void dfs(int i, int j, vector<vector<char>>& board){

        if(i<0 || j<0 || i>=board.size() || j>=board[i].size() || board[i][j]=='X' || board[i][j]=='Z')return;

        //nodes marked with 'Z' will be flipped back to 'O' 
        board[i][j]='Z';

        dfs(i+1, j, board);
        dfs(i-1, j, board);
        dfs(i, j+1, board);
        dfs(i, j-1, board);
        return;
    }
};