//https://leetcode.com/problems/merge-intervals/description/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> mergedIntervals;
        int prevStart = intervals[0][0], prevEnd = intervals[0][1];
        for(auto interval : intervals){
            if(prevEnd < interval[0]){
                //disjoint
                mergedIntervals.push_back({prevStart, prevEnd});
                prevStart = interval[0];
                prevEnd = interval[1];
            }else if(interval[0] >= prevStart && interval[1] <= prevEnd){
                //ignore interval - overlapping
            }else if(interval[0] >= prevStart && interval[1] > prevEnd){
                prevEnd = interval[1];
            }
        }
        mergedIntervals.push_back({prevStart, prevEnd});
        return mergedIntervals;
    }
};