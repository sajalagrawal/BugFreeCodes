//https://leetcode.com/problems/validate-binary-tree-nodes/description/


//1st - created new graph from input arrays 
class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        unordered_map<int, vector<int>> graph;
        vector<int> indegree(n, 0);

        //create graph, calculate indegree
        //keep checking if any node has more than one parent
        //one node can not have more than 2 outdegree before of the way input is given
        for(int i=0;i<n;i++){
            if(leftChild[i] != -1) {
                graph[i].push_back(leftChild[i]);
                indegree[leftChild[i]]++;
                if(indegree[leftChild[i]] > 1) return false;
            }
            if(rightChild[i] != -1) {
                graph[i].push_back(rightChild[i]);
                indegree[rightChild[i]]++;
                if(indegree[rightChild[i]] > 1) return false;
            }
        }

        //topological sort
        int nodesVisited=0;
        queue<int> topologicalSortQ;

        for(int i=0;i<n;i++){
            if(indegree[i] == 0) topologicalSortQ.push(i);
        }

        //check if there are non connected components
        if(topologicalSortQ.size() > 1)return false;
        
        while(!topologicalSortQ.empty()){
            int current = topologicalSortQ.front();
            nodesVisited++;
            topologicalSortQ.pop();

            for(int connection : graph[current]){
                indegree[connection]--;
                if(indegree[connection] == 0){
                    topologicalSortQ.push(connection);
                }
            }
        }


        //check if all nodes are covered in topological sort 
        return nodesVisited == n;
    }
};


//2nd - without creating a new graph
class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> indegree(n, 0);

        //create graph, calculate indegree
        //keep checking if any node has more than one parent
        //one node can not have more than 2 outdegree before of the way input is given
        for(int i=0;i<n;i++){
            if(leftChild[i] != -1) {
                indegree[leftChild[i]]++;
                if(indegree[leftChild[i]] > 1) return false;
            }
            if(rightChild[i] != -1) {
                indegree[rightChild[i]]++;
                if(indegree[rightChild[i]] > 1) return false;
            }
        }

        //topological sort
        int nodesVisited=0;
        queue<int> topologicalSortQ;

        for(int i=0;i<n;i++){
            if(indegree[i] == 0) topologicalSortQ.push(i);
        }

        //check if there are non connected components
        if(topologicalSortQ.size() > 1)return false;
        
        while(!topologicalSortQ.empty()){
            int current = topologicalSortQ.front();
            nodesVisited++;
            topologicalSortQ.pop();
            int connections[2] = {leftChild[current], rightChild[current]};
            for(int connection : connections){
                if(connection != -1){
                    indegree[connection]--;
                    if(indegree[connection] == 0){
                        topologicalSortQ.push(connection);
                    }
                }
            }
        }


        //check if all nodes are covered in topological sort 
        return nodesVisited == n;
    }
};