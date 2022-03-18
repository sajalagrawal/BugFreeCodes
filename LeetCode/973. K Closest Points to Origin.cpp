//https://leetcode.com/problems/k-closest-points-to-origin/


//MAX HEAP with size K
class Solution {
public:

	//functor(function object) in c++
    struct ComparePoints {
        bool operator()(pair<int,int> const& p1, pair<int,int> const& p2)
        {
            return p1.first < p2.first;
        }
    };
		
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, ComparePoints> minHeap;
        
        for(int i=0;i<points.size();i++){
            minHeap.push(make_pair(points[i][0]*points[i][0]+points[i][1]*points[i][1],i));
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        
        vector<vector<int>> kClosestPoints;
        while(minHeap.size()){
            kClosestPoints.push_back(points[minHeap.top().second]);
            minHeap.pop();
        }
        return kClosestPoints;
    }
};


//MIN HEAP with size N
class Solution {
public:
    struct ComparePoints {
        bool operator()(pair<int,int> const& p1, pair<int,int> const& p2)
        {
            return p1.first > p2.first;
        }
    };
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, ComparePoints> minHeap;
        
        for(int i=0;i<points.size();i++){
            minHeap.push(make_pair(points[i][0]*points[i][0]+points[i][1]*points[i][1],i));
        }
        
        vector<vector<int>> kClosestPoints;
        while(k--){
            kClosestPoints.push_back(points[minHeap.top().second]);
            minHeap.pop();
        }
        return kClosestPoints;
    }
};