//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        if(root==NULL) return result;
        q.push(root);
        bool reverseLevel = false;
        while(!q.empty()){
            int size = q.size();
            vector<int> currentLevel;
            for(int i=0;i<size; i++){
                TreeNode* current = q.front();
                q.pop();
                currentLevel.push_back(current->val);
                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);
            }
            if(reverseLevel){
                reverse(currentLevel.begin(), currentLevel.end());
            }
            reverseLevel = !reverseLevel;
            result.push_back(currentLevel);
        }

        return result;
    }
};