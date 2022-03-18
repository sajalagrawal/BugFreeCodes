//https://leetcode.com/problems/path-sum-ii/

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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> pathsWithTargetSum;
        vector<int> currentPath;
        
        computePathsWithTargetSum(root, targetSum, currentPath, pathsWithTargetSum);
        return pathsWithTargetSum;
    }
    
    void computePathsWithTargetSum(TreeNode* root, int targetSum, vector<int> currentPath, vector<vector<int>>& pathsWithTargetSum) {
        if(root == NULL)return;
        
        currentPath.push_back(root->val);
        if(root->val == targetSum && root->left == NULL && root->right == NULL){
            pathsWithTargetSum.push_back(currentPath);
        }
        computePathsWithTargetSum(root->left, targetSum - root->val, currentPath, pathsWithTargetSum);
        computePathsWithTargetSum(root->right, targetSum - root->val, currentPath, pathsWithTargetSum);
    }
};