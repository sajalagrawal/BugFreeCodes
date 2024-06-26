//https://leetcode.com/problems/maximum-depth-of-n-ary-tree/description/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL)return 0;
        int maxDepBelow=0;
        for(auto child : root->children){
            maxDepBelow = max(maxDepBelow, maxDepth(child));
        }
        return 1+maxDepBelow;
    }
};