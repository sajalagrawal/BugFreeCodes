//https://leetcode.com/problems/kth-smallest-element-in-a-bst/
//INORDER TRAVERSAL of BST is sorted


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
    int counter=0;
    int answer=-1;
    
    int kthSmallest(TreeNode* root, int k) {
        helper(root, k);
        return answer;
    }
    
    void helper(TreeNode* root, int k){
        if(answer != -1)return;
        if(root->left)helper(root->left, k);
        counter++;
        if(counter == k){
            answer = root->val;
            return;
        }
        if(root->right)helper(root->right, k);
    }
};