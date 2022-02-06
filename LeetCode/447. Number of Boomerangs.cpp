//https://leetcode.com/problems/number-of-boomerangs/
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int result=0;
        for(int i=0;i<points.size();i++){
            map<int, int> distanceCountFromCurrentPoint;
            for(int j=0;j<points.size();j++){
                if(i!=j){
                    int dis=getDistance(points[i], points[j]);
                    distanceCountFromCurrentPoint[dis]++;
                }
            }
            
            //2*nC2
            for(auto kv:distanceCountFromCurrentPoint){
                // cout<<kv.first<<" "<<kv.second<<endl;
                result+=kv.second*(kv.second-1);   
            }
        }
        return result;
    }
    
    int getDistance(vector<int>& p1, vector<int>& p2){
        int dx=p1[0]-p2[0], dy=p1[1]-p2[1];
        return dx*dx + dy*dy;
    }
};