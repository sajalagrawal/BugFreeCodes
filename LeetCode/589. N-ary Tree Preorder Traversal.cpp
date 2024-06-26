//https://leetcode.com/problems/n-ary-tree-preorder-traversal/description/

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
    vector<int> preorder(Node* root) {
        vector<int> order;
        preOrderNAryTree(root, order);
        return order;
    }

    void preOrderNAryTree(Node* root, vector<int>& order){
        //Binary tree - root > left > right
        //N ary tree - root > all-children

        if(root == NULL)return;
        order.push_back(root->val);
        for(auto child : root->children){
            preOrderNAryTree(child, order);
        }
    }

};