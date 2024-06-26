//https://leetcode.com/problems/invert-binary-tree/description/

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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return root;
        convertToMirrorImage(root);
        return root;
    }

    //move from bottom to top - keep swapping left and right node pointers for each root
    void convertToMirrorImage(TreeNode* node){
        if(node == NULL)return;
        convertToMirrorImage(node->left);
        convertToMirrorImage(node->right);
        swap(node->left, node->right);
    }
};