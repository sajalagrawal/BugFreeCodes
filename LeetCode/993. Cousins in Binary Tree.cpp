//https://leetcode.com/problems/cousins-in-binary-tree/

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
    bool isCousins(TreeNode* root, int x, int y) {
        int depthX=-1, depthY=-1;
        bool sameParent = findDepths(root, x, y, &depthX, &depthY, 0);
        if(sameParent){
            return false;
        }
        // cout<<depthX<<" "<<depthY<<endl;
        if(depthX == depthY){
            return true;
        }
        return false;
    }
    
    bool findDepths(TreeNode* root, int x, int y, int *depthX, int *depthY, int level){
        if(root == NULL){
            return false;
        }
        
        if(root->left !=NULL && root->right !=NULL){
            if((root->left->val == x && root->right->val == y) ||
               (root->left->val == y && root->right->val == x)){
                return true;
            }
        }
        
        if(root->val == x){
            *depthX  = level;
        }
        if(root->val == y){
            *depthY = level;
        }
        
        return findDepths(root->left, x, y, depthX, depthY, level+1) || 
        findDepths(root->right, x, y, depthX, depthY, level+1);
    
    }
    
};