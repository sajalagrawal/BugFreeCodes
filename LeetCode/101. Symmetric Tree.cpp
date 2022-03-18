//https://leetcode.com/problems/symmetric-tree/

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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        return areTwoTreesMirror(root->left, root->right);
    }
    
    bool areTwoTreesMirror(TreeNode* rootA, TreeNode* rootB){
        if(rootA == NULL and rootB == NULL)return true;
        if(rootA != NULL and rootB != NULL){
            if(rootA->val == rootB->val){
                return areTwoTreesMirror(rootA->left, rootB->right) &&
                    areTwoTreesMirror(rootA->right, rootB->left);
            }else{
                return false;
            }
        }
        return false;
    }
};