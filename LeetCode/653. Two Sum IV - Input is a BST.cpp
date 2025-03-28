//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description

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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> seen;
        return findTarget(root, k, seen);
    }

    bool findTarget(TreeNode* root, int k, unordered_set<int> &seen) {
        if (root == NULL) return false;
        if (seen.find(k-root->val) != seen.end()) return true;
        seen.insert(root->val);
        return findTarget(root->left, k, seen)
        || findTarget(root->right, k, seen);
    }
};