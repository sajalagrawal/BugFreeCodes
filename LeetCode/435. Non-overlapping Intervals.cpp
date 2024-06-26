//https://leetcode.com/problems/non-overlapping-intervals/description/

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int removeIntervals = 0;
        int prevStart = intervals[0][0], prevEnd = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            
            if(intervals[i][0] >= prevEnd){
                //disjoint
                prevStart = intervals[i][0];
                prevEnd = intervals[i][1];
            }else if(intervals[i][0] >= prevStart && intervals[i][1] >= prevEnd){
                removeIntervals++;
                //remove ith interval
            }else if(intervals[i][0] >= prevStart && intervals[i][1] < prevEnd){
                removeIntervals++;
                //remove previous
                //prevStart = intervals[i][0]; //required? 
                prevEnd = intervals[i][1];
            }
        }

        return removeIntervals;
    }
};

/*

edge case 1
X----------------------------X
  X------X   X------X   X-------X

edge case 2
X-----------X  X--------------X
        X----------X
*/
