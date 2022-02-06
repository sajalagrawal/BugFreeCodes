//https://leetcode.com/problems/binary-tree-level-order-traversal/

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levelOrderTraversal;
        generateLevelOrderTraversal(root, 0, levelOrderTraversal);
        return levelOrderTraversal;
    }
    
    void generateLevelOrderTraversal(TreeNode* node, int level, vector<vector<int>>& levelOrderTraversal){
        if(node == NULL){
            return;
        }
        vector<int> newLevel;
        if(levelOrderTraversal.size() <= level){
            levelOrderTraversal.push_back(newLevel);
        }
        levelOrderTraversal[level].push_back(node->val);
        generateLevelOrderTraversal(node->left, level+1, levelOrderTraversal);
        generateLevelOrderTraversal(node->right, level+1, levelOrderTraversal);
        return;
    }
};