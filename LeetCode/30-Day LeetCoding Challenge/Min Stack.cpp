class MinStack {
public:
    /** initialize your data structure here. */
    vector<pair<int,int>> v;
    
    MinStack() {
        
    }
    
    void push(int x) {
        int len = v.size();
        if(v.empty()){
            v.push_back(make_pair(x,x));
            return;
        }
        if(x < v[len-1].second){
            v.push_back(make_pair(x,x));
        }else{
            v.push_back(make_pair(x,v[len-1].second));
        }
    }
    
    void pop() {
        if(v.empty())return;
        int len = v.size();
        v.erase(v.begin()+len-1);
    }
    
    int top() {
        int len = v.size();
        return v[len-1].first;
    }
    
    int getMin() {
        int len = v.size();
        return v[len-1].second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
