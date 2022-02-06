//https://leetcode.com/problems/merge-two-binary-trees/

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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* newRoot = mergeTwoTrees(root1, root2);
        return newRoot;
    }
    
    TreeNode* mergeTwoTrees(TreeNode* root1, TreeNode* root2){
        if(root1 == NULL && root2 == NULL){
            return NULL;
        }
        TreeNode* node = new TreeNode();
        if(root1 != NULL && root2 != NULL){
            node->val += root1->val + root2->val;
        }
        if(root1 == NULL){
            return root2;
        }
        if(root2 == NULL){
            return root1;
        }
        node->left = mergeTwoTrees(root1->left, root2->left);
        node->right = mergeTwoTrees(root1->right, root2->right);
        return node;
    }
};