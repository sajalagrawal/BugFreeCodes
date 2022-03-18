//https://leetcode.com/problems/course-schedule/

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> graph;
        vector<int> indegree(numCourses, 0);
        
        for(auto prereq : prerequisites){
            graph[prereq[1]].push_back(prereq[0]);
            indegree[prereq[0]]++;
        }
        
        queue<int> topologicalSortQueue;
        int coursesWithPrereqDone = 0;
        for(int i=0;i<numCourses;i++){
            if(!indegree[i]){
                topologicalSortQueue.push(i);
                coursesWithPrereqDone++;
            }
        }
        
        while(!topologicalSortQueue.empty()){
            int top = topologicalSortQueue.front();
            topologicalSortQueue.pop();
            for(auto neighbor: graph[top]){
                indegree[neighbor]--;
                if(!indegree[neighbor]){
                    topologicalSortQueue.push(neighbor);
                    coursesWithPrereqDone++;
                }
            }
        }
        
        return coursesWithPrereqDone == numCourses;
    }
};