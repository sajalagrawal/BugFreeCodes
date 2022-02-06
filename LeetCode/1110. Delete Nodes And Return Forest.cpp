//https://leetcode.com/problems/delete-nodes-and-return-forest/

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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> newRoots;
        
        set<int> toDelete;
        for(int node : to_delete){
            toDelete.insert(node);
        }
        
        if(generateForest(root, toDelete, newRoots) != NULL){
            newRoots.push_back(root);
        }
        return newRoots;        
    }
    
    TreeNode* generateForest(TreeNode* root, set<int>& toDelete, vector<TreeNode*>& newRoots){
        if(root == NULL){
            return NULL;
        }
        
        root->left = generateForest(root->left, toDelete, newRoots);
        root->right = generateForest(root->right, toDelete, newRoots);
        
        //if we want to delete current node
        if(toDelete.find(root->val) != toDelete.end()){
            if(root->left != NULL){
                newRoots.push_back(root->left);
            }
            if(root->right != NULL){
                newRoots.push_back(root->right);
            }
            return NULL;
        }
        return root;
    }
};