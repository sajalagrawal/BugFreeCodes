//https://leetcode.com/problems/course-schedule-ii/
//TOPOLOGICAL SORT

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> graph;
        vector<int> indegree(numCourses+5, 0);
        vector<int> topologicalOrder;
        for(auto prerequisite : prerequisites) {
            graph[prerequisite[1]].push_back(prerequisite[0]);
            indegree[prerequisite[0]]++;
        }
        queue<int> coursesWithPrereqsTaken;
        for(int i=0;i<numCourses;i++){
            if(indegree[i] == 0){
                coursesWithPrereqsTaken.push(i);
            }
        }
        
        while(!coursesWithPrereqsTaken.empty()){
            int top = coursesWithPrereqsTaken.front();
            coursesWithPrereqsTaken.pop();
            topologicalOrder.push_back(top);
            for(auto connection : graph[top]){
                indegree[connection]--;
                if(indegree[connection] == 0){
                    coursesWithPrereqsTaken.push(connection);
                }
            }
        }
        
        if(topologicalOrder.size() != numCourses){
            return vector<int>{};
        }
        
        return topologicalOrder;
    }
};
