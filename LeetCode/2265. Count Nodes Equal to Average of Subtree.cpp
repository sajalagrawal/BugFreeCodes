//https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/description/

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
    int averageOfSubtree(TreeNode* root) {
        int result = 0;
        subtreeData(root, result);
        return result;
    }

    //pair<sum of subtree, nodes in subtree>
    pair<int, int> subtreeData(TreeNode* root, int& result) {
        if (root == NULL) return make_pair(0,0);
        if (root->left == NULL && root->right == NULL){
            result++;
            return make_pair(root->val, 1);
        }
        pair<int, int> leftSubtree = subtreeData(root->left, result); 
        pair<int, int> rightSubtree = subtreeData(root->right, result);
        int subtreeSum = leftSubtree.first + root->val + rightSubtree.first;
        int nodesInSubtree = leftSubtree.second + 1 + rightSubtree.second;
        if (subtreeSum/nodesInSubtree == root->val) result++;
        return make_pair(subtreeSum, nodesInSubtree);
    }
};