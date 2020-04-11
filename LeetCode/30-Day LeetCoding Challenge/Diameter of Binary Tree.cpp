//Unoptimized approach

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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        //if(root->left==NULL and root->right==NULL)return 0;
        int leftPathLength=0, rightPathLength=0;
        if(root->left)leftPathLength = longestPath(root->left);
        if(root->right)rightPathLength = longestPath(root->right);
        cout<<"leftPathLength = "<<leftPathLength<<endl;
        cout<<"rightPathLength = "<<rightPathLength<<endl;
        return max(leftPathLength + rightPathLength,
                   max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right) ) );
    }
    
    int longestPath(TreeNode* root){
        if(!root)return 0;
        //if(root->left==NULL and root->right==NULL)return 1;
        return max(longestPath(root->left), longestPath(root->right))+1;
    }
};
