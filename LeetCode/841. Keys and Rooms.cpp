//https://leetcode.com/problems/keys-and-rooms/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        
        dfs(rooms, 0, visited);
        for(int i=0;i<rooms.size();i++){
            if(!visited[i])return false;
        }
        return true;
    }
    
    void dfs(vector<vector<int>>& rooms, int src, vector<bool>& visited){
        visited[src]=true;
        for(auto neighbor : rooms[src]){
            if(!visited[neighbor]){
                dfs(rooms, neighbor, visited);
            }
        }
        return;
    }
    
};