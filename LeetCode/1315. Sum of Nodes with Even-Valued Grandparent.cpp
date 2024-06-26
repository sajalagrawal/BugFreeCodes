//https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/

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
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        sumOfEvenGrandparents(root, sum, -1, -1);
        return sum;
    }

    void sumOfEvenGrandparents(TreeNode* node, int& sum, int parent, int grandparent) {
        if (node==NULL)return;
        if (grandparent %2 == 0)sum+=node->val;
        sumOfEvenGrandparents(node->left, sum, node->val, parent);
        sumOfEvenGrandparents(node->right, sum, node->val, parent);
        return;
    }


};


