//https://leetcode.com/problems/binary-tree-right-side-view/description/


//1st approach
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

 //worst case - time O(nodes) space O(nodes)
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)return vector<int>{};
        //level order traversal - store last node on each level
        queue<TreeNode*> levelQ;
        levelQ.push(root);
        vector<int> rightSideNodes;
        while(!levelQ.empty()){
            int len = levelQ.size();

            //traverse each level
            for(int i=0;i<len;i++){
                TreeNode* cur = levelQ.front();
                levelQ.pop();
                
                if(cur->left)levelQ.push(cur->left);
                if(cur->right)levelQ.push(cur->right);

                if(i==len-1){
                    rightSideNodes.push_back(cur->val);
                }
            }
        }
        return rightSideNodes;
    }
};


//2nd approach
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

//reference https://leetcode.com/problems/binary-tree-right-side-view/solutions/56012/my-simple-accepted-solution-java/


//worst case - time O(n) space O(n) stack size
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightView;
        rightSideViewHelper(root, rightView, 0);
        return rightView;
    }

    void rightSideViewHelper(TreeNode* node, vector<int>& rightView, int level){
        if(node == NULL)return;

        //only one node is added at each level - if no node added at level 'L' - add it - else skip
        if(rightView.size() == level){
            rightView.push_back(node->val);
        }

        rightSideViewHelper(node->right, rightView, level+1);
        rightSideViewHelper(node->left, rightView, level+1);
    }
};