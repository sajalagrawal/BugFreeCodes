//https://leetcode.com/problems/minimum-depth-of-binary-tree/description/

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
    int minDepth(TreeNode* root) {
        return minDisToLeafNode(root);
    }

    int minDisToLeafNode(TreeNode* root){
        if(root==NULL)return 0;

        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        if(root->left == NULL){
            return 1+minDisToLeafNode(root->right);
        }
        if(root->right == NULL){
            return 1+minDisToLeafNode(root->left);
        }

        return 1+min(minDisToLeafNode(root->left), minDisToLeafNode(root->right));
    }
};