//https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
    
    vector<string> letterCombinations(string digits) {
        string numberMap[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        vector<string> result;
        if(digits.size() == 0){
            return result;
        }
        generateCombinations(digits, 0, "", result, numberMap);
        return result;
        
    }
    
    void generateCombinations(string digits, int index, string current, vector<string>& result, string numberMap[]){
        if(index==digits.size()){
            result.push_back(current);
            return;
        }
        for(char ch : numberMap[digits[index]-'0']){
            generateCombinations(digits, index+1, current+ch, result, numberMap);
        }
        return;
    }
    
};