//https://leetcode.com/problems/binary-tree-pruning/description/

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
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL)return NULL;
        //we need to call the helper function + check the final case for the whole tree as well
        bool doesRootTreeContainOne = doesSubtreeContainsOne(root);
        if(!doesRootTreeContainOne)return NULL;
        return root;
    }

    bool doesSubtreeContainsOne(TreeNode* node){
        if(node==NULL)return false;
        
        bool oneInLeft = doesSubtreeContainsOne(node->left);
        bool oneInRight = doesSubtreeContainsOne(node->right);

        if(!oneInLeft){
            node->left = NULL;
        }
        if(!oneInRight){
            node->right = NULL;
        }

        if(node->val == 1)return true;
        return oneInLeft || oneInRight;
        
    }
};