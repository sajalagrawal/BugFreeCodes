//https://leetcode.com/problems/lru-cache/
//Doubly linked list node
class Node {
public:    
    int key;
    int val;
    Node* prev;
    Node* next;

    Node(int k, int v) {
        key = k;
        val = v;
        prev = NULL;
        next = NULL;
    }

};

class LRUCache {
public:
    int capacity;
    int currentSize;
    unordered_map<int, Node*> keyToAddressMap;
    Node* dummyHead;
    Node* dummyTail;

    LRUCache(int cap) {
        capacity = cap;
        currentSize = 0;
        dummyHead = new Node(-1, -1);
        dummyTail = new Node(-1, -1);
        dummyHead->next = dummyTail;
        dummyTail->prev = dummyHead;
    }

    void remove(Node* node) {
        Node* p = node->prev;
        Node* n = node->next;
        p->next = n;
        n->prev = p;
    }
    
    void insertAtFront(Node* newfirst) {
        Node* oldfirst = dummyHead->next;
        dummyHead->next = newfirst;
        newfirst->next = oldfirst;
        newfirst->prev = dummyHead;
        oldfirst->prev = newfirst;
    }

    int get(int key) {
        if(keyToAddressMap.find(key) != keyToAddressMap.end()) {
            Node* address = keyToAddressMap[key];
            //move this to front
            remove(address);
            insertAtFront(address);
            return address->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        //if key is already present just update val and bring this node to front
        if(keyToAddressMap.find(key) != keyToAddressMap.end()) {
            Node* node = keyToAddressMap[key];
            node->val = value;
            remove(node);
            insertAtFront(node);
            return;
        }

        Node* node = new Node(key, value);
        keyToAddressMap[key] = node;
        currentSize++;
        if(currentSize > capacity) {
            currentSize = capacity;
            //remove least recently used (last node)
            keyToAddressMap.erase(dummyTail->prev->key);
            remove(dummyTail->prev);
        }
        insertAtFront(node);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */