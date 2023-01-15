//https://leetcode.com/problems/permutations/

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> permutations;
        vector<int> current;
        set<int> currentSet;
        for(int i=0;i<nums.size();i++){
            generatePermutations(nums, i, current, currentSet, permutations);
        }
        return permutations;
    }
    
    //vector<> current, set<> currentSet passed by value
    void generatePermutations(vector<int>& nums, int idx, vector<int> current, set<int> currentSet, vector<vector<int>>& permutations){
        // cout<<idx<<endl;
        current.push_back(nums[idx]);
        currentSet.insert(nums[idx]);
        
        if(current.size() == nums.size()){
            permutations.push_back(current);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(currentSet.find(nums[i]) == currentSet.end()){
                generatePermutations(nums, i, current, currentSet, permutations);
            }
        }
        return;
    }
    
};