//https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/description/

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
    TreeNode* reverseOddLevels(TreeNode* root) {
        mirrorNodeTraversal(root->left, root->right, 1);
        return root;
    }

    void mirrorNodeTraversal(TreeNode* a, TreeNode* b, int level){
        //given - all leaves are on the same level
        if (a==NULL or b==NULL)return;

        if(level % 2 == 1){
            int temp = a->val;
            a->val = b->val;
            b->val = temp;
        }
        mirrorNodeTraversal(a->left, b->right, level+1);
        mirrorNodeTraversal(a->right, b->left, level+1);
        return;
    }
};