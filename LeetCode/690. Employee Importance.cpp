//https://leetcode.com/problems/employee-importance/


//WITHOUT ADDITIONAL GRAPH
/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> mp;
        for(Employee* e: employees) {
            mp[e->id] = e;
        }
        return dfs(id, mp);
    }

    int dfs(int node, unordered_map<int, Employee*> mp) {
        int ans = mp[node]->importance;
        for(int subordinate: mp[node]->subordinates) {
            ans += dfs(subordinate, mp);
        }
        return ans;
    }
};



//WITH ADDITIONAL GRAPH

/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int totalImportance = 0;
    int getImportance(vector<Employee*> employees, int id) {
        map<int, vector<int>> emplGraph;
        vector<bool> visited(2005, false); //not required as indegree is always=1, keeping for bfs consistency
        map<int, int> emplImportance; 
        
        for(auto employee: employees){
            emplImportance[employee->id]=employee->importance;
            for(auto subordinate: employee->subordinates){
                emplGraph[employee->id].push_back(subordinate);
            }
        }
        for(auto emp: emplGraph){
            cout<<emp.first<<endl;
            for(auto subordinate: emp.second){
                cout<<subordinate<<" ";
            }
            cout<<endl;
        }
        
        bfs(id, emplGraph, emplImportance, visited);
        
        return totalImportance;
    }
    
    void bfs(int source, map<int, vector<int>>& emplGraph, map<int, int>& emplImportance, vector<bool>& visited){
        queue<int> bfsQueue;
        bfsQueue.push(source);
        
        while(!bfsQueue.empty()){
            int top = bfsQueue.front();
            cout<<"top="<<top<<endl;
            bfsQueue.pop();
            visited[top]=true;
            totalImportance+=emplImportance[top];
            if(emplGraph.find(top)!=emplGraph.end()){
                for(int edge: emplGraph[top]){
                    if(visited[edge]==false){
                        bfsQueue.push(edge);
                    }
                }
            }
        }
        return;
    }
    
    
};

