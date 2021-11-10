//MSFT

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
    int goodNodes(TreeNode* root) {
        if(root == NULL) return 0;
        return preOrderSolve(root, root->val);
    }
    
    int preOrderSolve(TreeNode* node, int maxTillRoot) {
        if(node==NULL)return 0;
        
        int countThisNode = 0;
        if(node->val >= maxTillRoot) countThisNode = 1;
        cout<<node->val<<" "<<maxTillRoot<<" "<<countThisNode<<endl;
        int currMax = max(node->val, maxTillRoot);
        if(node->left && node->right){
            return countThisNode + 
                preOrderSolve(node->left, currMax) +
                preOrderSolve(node->right, currMax);
        } else if(node->left) {
            return countThisNode + preOrderSolve(node->left, currMax);
        } else if(node->right) {
            return countThisNode + preOrderSolve(node->right, currMax);
        }
        return countThisNode;
    }
};


//OR -- Compact sol
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
    int goodNodes(TreeNode* root) {
        if(root == NULL) return 0;
        return preOrderSolve(root, root->val);
    }
    
    int preOrderSolve(TreeNode* node, int maxTillRoot) {
        if(node==NULL)return 0;
        
        int countThisNode = 0;
        if(node->val >= maxTillRoot) countThisNode = 1;
        cout<<node->val<<" "<<maxTillRoot<<" "<<countThisNode<<endl;
        int currMax = max(node->val, maxTillRoot);
        int result = countThisNode;
        
        if(node->left) {
            result += preOrderSolve(node->left, currMax);
        } 
        if(node->right) {
            result += preOrderSolve(node->right, currMax);
        }
        return result;
    }
};
