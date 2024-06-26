//https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<int, vector<int>> graph;
        buildGraph(root, graph);
        
        vector<bool> visited(505, false);
        return bfs(target->val, k, graph, visited);
    }

    void buildGraph(TreeNode* node, unordered_map<int, vector<int>>& graph){
        if(node==NULL)return;

        if(node->left){
            int u=node->val, v=node->left->val;
            graph[u].push_back(v);
            graph[v].push_back(u);
            buildGraph(node->left, graph);
        }
        
        if(node->right){
            int u=node->val, v=node->right->val;
            graph[u].push_back(v);
            graph[v].push_back(u);
            buildGraph(node->right, graph);
        }
    }

    vector<int> bfs(int src, int k, unordered_map<int, vector<int>>& graph, vector<bool>& visited){
        queue<int> bfsQueue;
        bfsQueue.push(src);
        visited[src]=true;
        
        vector<int> result;
        while(!bfsQueue.empty()){
            int len = bfsQueue.size();
            
            while(len--){
                int cur = bfsQueue.front();
                bfsQueue.pop();
                visited[cur]=true;
                if(k==0) result.push_back(cur);
                for(auto neighbor : graph[cur]){
                    if(!visited[neighbor]) bfsQueue.push(neighbor);
                }
            }
            if(k==0)return result;
            k--;
        }
        return result;
    }
};