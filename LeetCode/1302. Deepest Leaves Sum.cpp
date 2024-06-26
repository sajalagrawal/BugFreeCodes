//https://leetcode.com/problems/deepest-leaves-sum/description/


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
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        //<level, sum>
        map<int, int> leafSumByLevel;
        findLeafSumByLevels(root, leafSumByLevel, 0);
        // map<int, int>::reverse_iterator it;
        // for (auto it = leafSumByLevel.rbegin(); it != leafSumByLevel.rend(); it++) {
        //     sum = it->second;
        //     break;
        // }
        return leafSumByLevel.rbegin()->second;
    }

    void findLeafSumByLevels(TreeNode* root, map<int, int>& leafSumByLevel, int height) {
        if (root==NULL) return;
        if (root->left == NULL && root->right == NULL) {
            leafSumByLevel[height] += root->val;
            // cout<<height<<" "<<leafSumByLevel[height]<<endl;
        }
        findLeafSumByLevels(root->left, leafSumByLevel, height+1);
        findLeafSumByLevels(root->right, leafSumByLevel, height+1);
    }    
};

