//https://leetcode.com/problems/increasing-order-search-tree/description/

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
    TreeNode* prev=NULL;
    TreeNode* newRoot=NULL;

    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        prev->right=NULL;
        return newRoot;
    }

    void inorder(TreeNode* root){
        if(root == NULL)return;
        inorder(root->left);
        
        if(prev == NULL){
            prev=root;
            newRoot=root;
            prev->left=NULL;
        }else{
            prev->right=root;
            root->left=NULL;
            prev=root;
        }
        
        //cout<<root->val<<endl;
        inorder(root->right);
           
    }
};