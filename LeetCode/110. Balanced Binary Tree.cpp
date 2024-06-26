//https://leetcode.com/problems/balanced-binary-tree/description/

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
    bool isBalanced(TreeNode* root) {
        return isBalancedHelper(root).second;
    }

    //returns pair<height, isBalancedAtNode> 
    pair<int, bool> isBalancedHelper(TreeNode* root){
        if(root==NULL) return make_pair(0, true);
        if(root->left == NULL && root->right == NULL) return make_pair(1, true);

        pair<int, bool> leftSubtree = isBalancedHelper(root->left);
        if(leftSubtree.second == false)return make_pair(-1, false);
        pair<int, bool> rightSubtree = isBalancedHelper(root->right);
        if(rightSubtree.second == false)return make_pair(-1, false);

        // cout<<root->val<<" "<<leftSubtree.first<<" "<<rightSubtree.first<<endl;
        int ht = 1 + max(leftSubtree.first, rightSubtree.first);
        if(abs(leftSubtree.first-rightSubtree.first) > 1) return make_pair(ht, false);

        return make_pair(ht, true);
    }
};