//https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/

//WITH GLOBAL VARIABLE
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
    int maxAncestorDiff(TreeNode* root) {
        int res=0;
        findMaxDiff(root, root->val, root->val, res);
        return res;
    }

    void findMaxDiff(TreeNode* root, int minValOnPath, int maxValOnPath, int & res) {
        if(root==NULL)return;
        res = max(res, 
                max(abs(root->val-minValOnPath), abs(root->val-maxValOnPath)));
        minValOnPath = min(root->val, minValOnPath);
        maxValOnPath = max(root->val, maxValOnPath);
        findMaxDiff(root->left, minValOnPath, maxValOnPath, res);
        findMaxDiff(root->right, minValOnPath, maxValOnPath, res);
    }

};


//WITHOUT GLOBAL VARIABLE
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
    int maxAncestorDiff(TreeNode* root) {
        return findMaxDiff(root, root->val, root->val);
    }

    int findMaxDiff(TreeNode* root, int minValOnPath, int maxValOnPath) {
        if(root==NULL)return 0;
       
        minValOnPath = min(root->val, minValOnPath);
        maxValOnPath = max(root->val, maxValOnPath);
        return max(max(abs(root->val-minValOnPath), abs(root->val-maxValOnPath)), 
                   max(findMaxDiff(root->left, minValOnPath, maxValOnPath),
                       findMaxDiff(root->right, minValOnPath, maxValOnPath))
                  );
    }

};