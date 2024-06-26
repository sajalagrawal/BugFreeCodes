//https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/description/

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
    int sumRootToLeaf(TreeNode* root) {
        int res=0;
        sumBinaryPaths(root, 0, res);
        return res;
    }

    void sumBinaryPaths(TreeNode* node, int parentVal, int & result){
        if(node==NULL)return;
        //brackets IMP! operator precedence 
        //otherwise considered as parentVal<<(1 + node->val) if no brackets
        node->val = (parentVal<<1) + node->val;
        
        if(node->left==NULL && node->right==NULL){
            result += node->val;
        }
        
        sumBinaryPaths(node->left, node->val, result);
        sumBinaryPaths(node->right, node->val, result);
    }
};