//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //make p <= q
        if(p->val > q->val) swap(p, q);
        // cout<<p->val<<" "<<q->val;
        return lcaHelper(root, p, q);
    }

    TreeNode* lcaHelper(TreeNode* cur, TreeNode* p, TreeNode* q){
        if(cur == NULL)return NULL;
        // cout<<"cur="<<cur->val<<endl;
        if(cur->val == p->val || cur->val == q->val) return cur;
        if(cur->val > p->val && cur->val < q->val) return cur;
        if(cur->val > q->val) return lcaHelper(cur->left, p, q);
        return lcaHelper(cur->right, p, q);
        
    }
};