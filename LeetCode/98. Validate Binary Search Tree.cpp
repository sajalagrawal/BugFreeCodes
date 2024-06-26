//https://leetcode.com/problems/validate-binary-search-tree/description/

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
    bool isValidBST(TreeNode* root) {
        long long prevNode = LLONG_MIN;
        return inorderTraversal(root, prevNode);
    }

    bool inorderTraversal(TreeNode* root, long long &prevNode){
        if(root == NULL)return true;
        bool left = inorderTraversal(root->left, prevNode);
        if (!left) return false;
        if(root->val <= prevNode) return false;
        prevNode = root->val;
        bool right = inorderTraversal(root->right, prevNode);
        if (!right) return false;
        return true;
    }
};