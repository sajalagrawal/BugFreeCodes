//https://leetcode.com/problems/validate-stack-sequences/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> pushOrderStack;
        int j=0;
        for(int i=0;i<pushed.size();i++){
            pushOrderStack.push(pushed[i]);
            while(j<popped.size() and !pushOrderStack.empty() and popped[j]==pushOrderStack.top()){
                pushOrderStack.pop();
                j++;
            }
            
        }
        
        return pushOrderStack.empty();
    }
};