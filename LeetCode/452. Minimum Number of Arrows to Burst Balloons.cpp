//https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

        //keep finding intersection
        int prevStart = points[0][0], prevEnd = points[0][1], shots = 0;
        for(auto point : points){
            if(point[0] > prevEnd){
                shots++;
                prevStart = point[0];
                prevEnd = point[1];
            } else {
                prevStart = max(prevStart, point[0]);
                prevEnd = min(prevEnd, point[1]);
            }
        }
        shots++;
        return shots;
    }
};