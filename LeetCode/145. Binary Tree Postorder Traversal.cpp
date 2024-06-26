//https://leetcode.com/problems/binary-tree-postorder-traversal/description/


//Recursive
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> order;
        postorder(root, order);
        return order;
    }

    void postorder(TreeNode* node, vector<int>& order){
        if(node==NULL)return;
        //Left > Right > Root

        postorder(node->left, order);
        postorder(node->right, order);
        order.push_back(node->val);
        return;
    }
};


//Iterative
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> order;
    
        stack<TreeNode*> s;
        if(root)s.push(root);
        while(!s.empty()){
            TreeNode* topNode = s.top();
            s.pop();
            order.push_back(topNode->val);
            if(topNode->left)s.push(topNode->left);
            if(topNode->right)s.push(topNode->right);
        }
        reverse(order.begin(), order.end());
        return order;
    }

};