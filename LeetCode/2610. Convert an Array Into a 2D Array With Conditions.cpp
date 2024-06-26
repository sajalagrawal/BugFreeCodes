//https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> numCountMap;
        for(int num : nums){
            numCountMap[num]++;
        }

        vector<vector<int>> result;
        for(auto iter = numCountMap.begin(); iter!=numCountMap.end(); iter++){
            int num = iter->first, count = iter->second;
            for(int i=0;i<count;i++){

                //no of rows in result vector are lesser than count
                if(result.size() <= i){
					
					//1
                    //vector<int> v;
                    //result.push_back(v);
					
					//2
					result.push_back({});
					
					//3
					//result.emplace_back();
					
					//1 2 3 will give similar result
                }
                result[i].push_back(num);
            }
        }
        return result;
    }
};