//https://leetcode.com/problems/n-ary-tree-postorder-traversal/description/


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
    vector<int> postorder(Node* root) {
        vector<int> postOrderNAryTree;
        postOrderTraversal(root, postOrderNAryTree);
        return postOrderNAryTree;
    }

    void postOrderTraversal(Node* root, vector<int>& postOrderNAryTree){
        if(root==NULL)return;

        //Binary tree - Left > Right > Root
        //N ary tree - All children > Root
        for(auto child : root->children){
            postOrderTraversal(child, postOrderNAryTree);
        }
        postOrderNAryTree.push_back(root->val);
    }
};