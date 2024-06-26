//https://leetcode.com/problems/lexicographically-smallest-equivalent-string/description/

class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        //0 to 25 index denoting 'a' to 'z'
        vector<int> parent(26, -1);

        for(int i=0;i<s1.size();i++){
            if (s1[i] != s2[i])
                unionBySmallerCharacter(s1[i], s2[i], parent);
        }
        string res = "";
        for(int i=0;i<baseStr.size();i++){
            int parentI = findParent(baseStr[i]-'a', parent);
            res+='a'+parentI;
        }
        return res;
    }

    int findParent(int a, vector<int>& parent){
        if(parent[a] == -1){
            return a;
        }
        parent[a] = findParent(parent[a], parent);
        return parent[a];
    }

    void unionBySmallerCharacter(char a, char b, vector<int>& parent){
        int parentA = findParent(a-'a', parent);
        int parentB = findParent(b-'a', parent);

        if(parentA == parentB)return;

        //lexicographically smaller character
        if (parentA < parentB) {
            parent[parentB] = parentA;
        } else {
            parent[parentA] = parentB;
        }
    }
};