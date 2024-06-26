//https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/description/

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
    TreeNode* bstToGst(TreeNode* root) {
        int sumOfNodesGreater = 0;
        reverseInorder(root, sumOfNodesGreater);
        return root;
    }

    //right root left
    //Inorder of BST is sorted
    void reverseInorder(TreeNode* node, int& sumOfNodesGreater) {
        if (node==NULL)return;
        
        reverseInorder(node->right, sumOfNodesGreater);
        node->val+=sumOfNodesGreater;
        sumOfNodesGreater = node->val;
        reverseInorder(node->left, sumOfNodesGreater);

    }
};