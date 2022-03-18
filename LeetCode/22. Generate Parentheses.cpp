//https://leetcode.com/problems/generate-parentheses/i

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> combinations;
        
        generateCombinations(n, "(", combinations, 1, 0);
        return combinations;
    }
    
    void generateCombinations(int n, string current, vector<string>& combinations, int openingParenCount, int closingParenCount){
        if(current.size() == n*2){
            combinations.push_back(current);
            return;
        }
       //cant add anymore '('
        if(openingParenCount == n){
            generateCombinations(n, current+')',combinations,openingParenCount,closingParenCount+1);
            return;
        }
        
        if(openingParenCount == closingParenCount){
            generateCombinations(n, current+'(',combinations,openingParenCount+1,closingParenCount);
            return;
        }
        
        generateCombinations(n, current+'(',combinations,openingParenCount+1,closingParenCount);
        generateCombinations(n, current+')',combinations,openingParenCount,closingParenCount+1);
        
        return;
    }
};