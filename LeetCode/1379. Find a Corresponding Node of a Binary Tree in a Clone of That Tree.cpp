//https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return traverseBothTrees(original, cloned, target);
    }

    TreeNode* traverseBothTrees(TreeNode* aNode, TreeNode* bNode, TreeNode* target) {
        if (aNode == NULL) return NULL; 
        if (aNode->val == target->val) return bNode;

        //constraint - target node is a node from the original tree and is not null.

        TreeNode* targetNodeInLeft = traverseBothTrees(aNode->left, bNode->left, target);
        //better to check first half if we have an answer already & break, if yes
        if (targetNodeInLeft) return targetNodeInLeft;
        TreeNode* targetNodeInRight = traverseBothTrees(aNode->right, bNode->right, target);
        if (targetNodeInRight) return targetNodeInRight;
        return NULL; 
    }
};