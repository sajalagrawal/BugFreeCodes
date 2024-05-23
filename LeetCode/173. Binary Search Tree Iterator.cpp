//173. Binary Search Tree Iterator


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
class BSTIterator {
public:
    stack<TreeNode*> s;

    BSTIterator(TreeNode* root) {
        TreeNode* curr = root;
        while(curr) {
            s.push(curr);
            curr = curr->left;
        }
    }
    
    int next() {
        //given - assume that next() calls will always be valid. 
        TreeNode* nextInOrderElement = s.top();
        s.pop();
        TreeNode* curr = nextInOrderElement->right;
        while(curr) {
            s.push(curr);
            curr = curr->left;
        }
        return nextInOrderElement->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */