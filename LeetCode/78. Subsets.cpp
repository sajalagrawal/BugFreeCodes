//https://leetcode.com/problems/subsets/

//1
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        
        generateSubsets(nums, 0, current, result);
        return result;
    }

    void generateSubsets(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
        if(index == nums.size()) {
            result.push_back(current);
            return;
        }

        //pick nums[index]
        current.push_back(nums[index]);
        generateSubsets(nums, index+1, current, result);

        //dont pick nums[index]
        current.pop_back();
        generateSubsets(nums, index+1, current, result);
    }
};


//2
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int> emptySet;
        vector<int> current;
        set<int> currentSet;
        subsets.push_back(emptySet);
        
        for(int len=1;len<=nums.size();len++){
            for(int i=0;i<nums.size();i++){
                generateSubsets(nums, len, i, current, currentSet, subsets);
            }
        }
        
        return subsets;
    }
    
    
    
    void generateSubsets(vector<int>& nums, int len, int idx, vector<int> current, set<int> currentSet, vector<vector<int>>& subsets){
        current.push_back(nums[idx]);
        currentSet.insert(nums[idx]);
        
        if(current.size() == len){
            subsets.push_back(current);
            return;
        }
        
        for(int i=idx+1;i<nums.size();i++){
            if(currentSet.find(nums[i]) == currentSet.end()){
                generateSubsets(nums, len, i, current, currentSet, subsets);
            }
        }
        return;
    }
};
