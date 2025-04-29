//https://leetcode.com/problems/implement-trie-prefix-tree/description

//good reference - https://takeuforward.org/data-structure/implement-trie-1/

class Node {
public:
    
    Node* links[26];
    bool end = false;

    //ideally we should do this - compiler might set all links[] to NULL on: new Node();
    Node() {
        for (int i = 0; i < 26; ++i) {
            links[i] = nullptr;
        }
    }

    bool containsKey(char ch) {
        return links[ch - 'a'] != NULL;
    }

    Node* insert(char ch) {
        Node* newNode = new Node();
        links[ch - 'a'] = newNode;
        return newNode;
    }

    Node* get(char ch) {
        return links[ch - 'a'];
    }

    bool isEnd() {
        return end;
    }

    void setEnd() {
        end = true;   
    }

};

class Trie {
public:
    Node* root;

    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for(int i=0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                node->insert(word[i]);
            }
            node = node->get(word[i]);

        }
        node->setEnd();
    }
    
    bool search(string word) {
        Node* node = root;
        for(int i=0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        for(int i=0;i<prefix.size();i++) {
            if(!node->containsKey(prefix[i])) {
                return false;
            }
            node = node->get(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
