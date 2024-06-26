//https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/description/


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
class FindElements {
    
private: 
    TreeNode* root;

public:
    FindElements(TreeNode* oldRoot) {
        recoverTree(oldRoot, 0);
        root = oldRoot;
    }

    void recoverTree(TreeNode* node, int newNodeValue){
        if(node==NULL) return;
        node->val = newNodeValue;
        recoverTree(node->left, newNodeValue*2+1);
        recoverTree(node->right, newNodeValue*2+2);
    }
    
    bool find(int target) {
        return findInRecoveredTree(root, target);
    }

    bool findInRecoveredTree(TreeNode* node, int target){
        if(node==NULL) return false;
        if(node->val == target) return true;
        return findInRecoveredTree(node->left, target) 
        || findInRecoveredTree(node->right, target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */