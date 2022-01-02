//https://leetcode.com/problems/find-the-town-judge/

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int indegree[n+5], outdegree[n+5];
        memset(indegree, 0, (n+5)*sizeof(int));
        memset(outdegree, 0, (n+5)*sizeof(int));
        for(int i=0;i<trust.size();i++){
            outdegree[trust[i][0]]++;            
            indegree[trust[i][1]]++;            
        }
        for(int i=1;i<=n;i++){
            // cout<<outdegree[i]<<" ";
            if(indegree[i]==n-1 && outdegree[i]==0){
                return i;
            }
        }
        return -1;
    }
};


//SOL-2 Use single array to store indegree-outdegree 

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int inMinusOutDegree[n+5];
        memset(inMinusOutDegree, 0, (n+5)*sizeof(int));
        
        for(int i=0;i<trust.size();i++){
            inMinusOutDegree[trust[i][0]]--;            
            inMinusOutDegree[trust[i][1]]++;            
        }
        for(int i=1;i<=n;i++){
            cout<<inMinusOutDegree[i]<<" ";
            if(inMinusOutDegree[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};
