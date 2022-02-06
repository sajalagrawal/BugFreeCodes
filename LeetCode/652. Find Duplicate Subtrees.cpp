//https://leetcode.com/problems/find-duplicate-subtrees/

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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> results;
        map<string,int > subTrees;
        
        findDuplicateSubtrees(root, results, subTrees);
        
        return results;
    }
    
    string findDuplicateSubtrees(TreeNode* node, vector<TreeNode*>& results, map<string, int>& subTrees){
        if(node == NULL){
            return "/N";
        }
        string currentTree = to_string(node->val);
        currentTree += "/"+findDuplicateSubtrees(node->left, results, subTrees);
        currentTree += "/"+findDuplicateSubtrees(node->right, results, subTrees);
        
        subTrees[currentTree]++;
        if(subTrees[currentTree] == 2){
            results.push_back(node);
        }
        return currentTree;
    }
};