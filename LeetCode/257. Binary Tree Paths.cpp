//https://leetcode.com/problems/binary-tree-paths/description/


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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        generateAllPathsToLeaves(root, "", result);
        return result;
    }

    void generateAllPathsToLeaves(TreeNode* root, string currentPath, vector<string>& result) {
        if(root == NULL)return;
        // cout<<to_string(root->val)<<endl;
        if(currentPath.size() > 0)currentPath+="->";
        if(root->left == NULL && root->right == NULL){
            currentPath+=to_string(root->val);
            result.push_back(currentPath);
        }
        string cur = to_string(root->val);
        generateAllPathsToLeaves(root->left, currentPath+cur, result);
        generateAllPathsToLeaves(root->right, currentPath+cur, result);
    }

};