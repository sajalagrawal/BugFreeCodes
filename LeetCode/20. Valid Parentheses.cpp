//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> ipStack;
        if(s.size()%2)return false;
        for(char ch : s){
            
            if(ipStack.size()!=0 and 
               (
                   (ipStack.top()=='{' and ch=='}') or 
                   (ipStack.top()=='[' and ch==']') or 
                   (ipStack.top()=='(' and ch==')')
               )
              ){
                ipStack.pop();
            }
            else{
                ipStack.push(ch);
            }
        }
        
        return ipStack.size() == 0;
    }
};