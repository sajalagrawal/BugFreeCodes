//https://leetcode.com/problems/lowest-common-ancestor-of-deepest-leaves/description/

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
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        TreeNode* lca=root;
        int maxDepth=0, level=1;
        lcaDeepestLeavesHelper(root, lca, maxDepth, level);
        return lca;
    }

    //returns height at treeNode node
    int lcaDeepestLeavesHelper(TreeNode* node, TreeNode* &lca, int &maxDepth, int level){
        if(node==NULL) return 0;
        // cout<<node->val<<endl;
        // if(node->left == NULL && node->right==NULL) return 1;
        int leftHeight = lcaDeepestLeavesHelper(node->left, lca, maxDepth, level+1);    
        int rightHeight = lcaDeepestLeavesHelper(node->right, lca, maxDepth, level+1);
        cout<<node->val<<" level= "<<level<<" LR "<<leftHeight<<" "<<rightHeight<<endl;
        if(leftHeight == rightHeight){
            //greater than equals - equals is important - all nodes on a path with deepest leaves will meet this condition leftHeight+level >= maxDepth
            if(leftHeight+level >= maxDepth){
                lca=node;
                cout<<lca->val<<" -- "<<leftHeight+level<<" "<<maxDepth<<" "<<endl;
                maxDepth=leftHeight+level;
            }
        }
        return 1+max(leftHeight, rightHeight);    
    }
};
