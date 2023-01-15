//https://leetcode.com/problems/satisfiability-of-equality-equations/

class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        vector<int> parent(26, -1);
        vector<int> rank(26, 0);
        
        //form disjoint sets only for equality cases
        for(auto eq : equations){
            if(eq[1]=='='){
                unionByRank(eq[0]-'a', eq[3]-'a', parent, rank);
            }
        }
        
        //check in disjoint set only for non-equality cases
        for(auto eq : equations){
            if(eq[1]=='!'){
                cout<<eq<<" "<<findParent(eq[0] - 'a', parent)<<" "<<findParent(eq[3] - 'a', parent)<<endl;
                if( findParent(eq[0] - 'a', parent) == findParent(eq[3] - 'a', parent) ){
                    return false;
                }
            }
        }
        return true;
    }
    
    int findParent(int a, vector<int>& parent){
        if(parent[a] == -1){
            return a;
        }
        parent[a] = findParent(parent[a], parent);
        return parent[a];
    }
    
    void unionByRank(int a, int b, vector<int>& parent, vector<int>& rank){
        int parentA = findParent(a, parent);
        int parentB = findParent(b, parent);
        
        if(parentA == parentB)return;
        
        if(rank[parentA] > rank[parentB]){
            parent[parentB] = parentA;
            rank[parentA]++;
        }else{
            parent[parentA] = parentB;
            rank[parentB]++;
        }
    }
};