//https://leetcode.com/problems/minimum-area-rectangle/

class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        unordered_map<int, unordered_set<int>> pointsMap;
        
        for(int i=0;i<points.size();i++){
            pointsMap[points[i][0]].insert(points[i][1]);
        }
        // for(auto kv:pointsMap){
        //     cout<<kv.first<<endl;
        // }
        // set<int> s = pointsMap[3];
        // for(auto is : s)cout<<is<<endl;
        int minimumArea=INT_MAX;
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                if(points[i][0]!=points[j][0] and points[i][1]!=points[j][1]){
                    
                    int p3x=points[i][0], p3y=points[j][1];
                    int p4x=points[j][0], p4y=points[i][1];
                    if(
                       // pointsMap.find(p3x) != pointsMap.end() and //p3x would be there for sure
                       pointsMap[p3x].find(p3y) != pointsMap[p3x].end() and
                       // pointsMap.find(p4x) != pointsMap.end() and //p4x would be there for sure
                       pointsMap[p4x].find(p4y) != pointsMap[p4x].end()){
                        // cout<<"i="<<i<<" j="<<j<<" p3x="<<p3x<<" p3y="<<p3y<<" p4x="<<p4x<<" p4y="<<p4y<<endl;
                        minimumArea=min( minimumArea, 
                                         abs(points[j][0]-points[i][0])*abs(points[j][1]-points[i][1]) );
                    }
                }
            }
        }
        return minimumArea==INT_MAX ? 0:minimumArea;
    }
};