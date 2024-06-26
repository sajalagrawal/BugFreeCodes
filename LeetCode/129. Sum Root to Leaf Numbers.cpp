//https://leetcode.com/problems/sum-root-to-leaf-numbers/description/

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
    int sumNumbers(TreeNode* root) {
        return inorder(root, 0);
    }

    int inorder(TreeNode* src, int pathSum){
        if(src == NULL) return 0;
        if(src->left == NULL && src->right == NULL){
            return pathSum*10 + src->val;        
        }
        return inorder(src->left, pathSum*10 + src->val)
        + inorder(src->right, pathSum*10 + src->val);
    }
};