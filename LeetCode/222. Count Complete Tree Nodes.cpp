//https://leetcode.com/problems/count-complete-tree-nodes/

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

#include<bits/stdc++.h>

class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL)return 0;
        int leftMostHeight = countLeftMostHeight(root);
        int rightMostHeight = countRightMostHeight(root);
        
        if(leftMostHeight == rightMostHeight){
            return pow(2, leftMostHeight)-1;
        }
        
        return 1 
               + countNodes(root->left) 
               + countNodes(root->right);
        
    }
    
    int countLeftMostHeight(TreeNode* root){
        if(root==NULL)return 0;
        return 1+countLeftMostHeight(root->left);
    }
    
    int countRightMostHeight(TreeNode* root){
        if(root==NULL)return 0;
        return 1+countRightMostHeight(root->right);
    }
};