//https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/description/

//1 Pass Solution
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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        TreeNode* result=root;
        int maxDepth = 1;
        findSubtree(root, 1, maxDepth, result);
        return result;
    }

    int findSubtree(TreeNode* node, int currentHeight, int& maxDepth, TreeNode* &result){
        if(node == NULL) return 0;
        int depthInLeft = findSubtree(node->left, 1+currentHeight, maxDepth, result);
        int depthInRight = findSubtree(node->right, 1+currentHeight, maxDepth, result);
        maxDepth = max(maxDepth, max(depthInLeft, depthInRight)+currentHeight);
        if(depthInLeft == depthInRight 
        && depthInLeft + currentHeight == maxDepth){
            result = node;
        }
        return 1 + max(depthInLeft, depthInRight);
    }
};



//2 Pass Solution
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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        TreeNode* result=root;
        int maxDepthInOriginalTree = maxDepth(root);
        findSubtree(root, 1, maxDepthInOriginalTree, result);
        return result;
    }

    int maxDepth(TreeNode* node){
        if(node == NULL)return 0;
        return 1 + max(maxDepth(node->left), maxDepth(node->right));
    }

    int findSubtree(TreeNode* node, int currentNodeHeight, int maxDepthInOriginalTree, TreeNode* &result){
        if(node == NULL) return 0;
        int depthInLeft = findSubtree(node->left, 1+currentNodeHeight, maxDepthInOriginalTree, result);
        int depthInRight = findSubtree(node->right, 1+currentNodeHeight, maxDepthInOriginalTree, result);
        if(depthInLeft == depthInRight 
        && depthInLeft + currentNodeHeight == maxDepthInOriginalTree){
            result = node;
        }
        return 1 + max(depthInLeft, depthInRight);
    }
};