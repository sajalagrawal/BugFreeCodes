//https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)return root;

        //level order traversal in tree
        queue<Node*> levelQueue;
        levelQueue.push(root);
        while(!levelQueue.empty()){
            int len = levelQueue.size();
            Node* prev = NULL;
            //traverse a level
            for(int i=0;i<len;i++){
                Node* cur = levelQueue.front();
                levelQueue.pop();
                if(prev==NULL){
                    prev=cur;
                }else{
                    prev->next=cur;
                    prev=cur;
                }
                if(cur->left)levelQueue.push(cur->left);
                if(cur->right)levelQueue.push(cur->right);
            }
        }
        return root;
    }
};


//2nd approach
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

//reference https://leetcode.com/problems/populating-next-right-pointers-in-each-node/solutions/37472/a-simple-accepted-solution/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)  return root;

        Node* cur = root;
        while(cur->left){
            cur->left->next = cur->right;

            Node* level = cur;
            while(level != NULL){
                level->left->next=level->right;
                if(level->next)level->right->next = level->next->left;
                level = level->next;
            }

            cur = cur->left;
        }
        return root;
    }
};