//https://leetcode.com/problems/partition-labels/description/

//Approach 1
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastIndex(26, -1);

        for(int i=0;i<s.size();i++){
            lastIndex[s[i] - 'a']=i;
        }

        vector<int> partLengths;
        int curLastIndex = lastIndex[s[0]-'a'], partitionStart=0;
        for(int i=0;i<s.size();i++){
            
            if(curLastIndex == i){
                partLengths.push_back(i-partitionStart+1);
                partitionStart = i+1;
                if(i+1 <= s.size()-1)curLastIndex=lastIndex[s[i+1]-'a'];
            }else{
                curLastIndex=max( curLastIndex, lastIndex[s[i]-'a'] );
            }

        }
        return partLengths;
    }
};




//Approach 2
class Solution {
public:
    vector<int> partitionLabels(string s) {
        //character, pair<firstIndex, lastIndex>
        //number of rows = 26 for a-z
        //number of cols = 2 for firstIndex, lastIndex
        vector<vector<int>> charPositioningMap(26, vector<int> (2, -1));

        for(int i=0;i<s.size();i++){
            int row = s[i]-'a';
            //first time seeing this character
            if(charPositioningMap[row][0] == -1){
                charPositioningMap[row][0] = i;
                charPositioningMap[row][1] = i; //set lastIndex=firstIndex for 1st occurence
            }else{
                charPositioningMap[row][1] = i;
            }
        }

        //find all disjoint intervals
        sort(charPositioningMap.begin(), charPositioningMap.end());

        int prevStart = charPositioningMap[0][0], prevEnd = charPositioningMap[0][1];
        vector<int> disjointIntervalsSize;
        for(vector<int> current : charPositioningMap){
            if(current[0]==-1 or current[1]==-1)continue;
            if(prevStart==-1 or prevEnd==-1){
                prevStart = current[0];
                prevEnd = current[1];
            }
            if(current[0] > prevEnd){
                // cout<<current[0]<<"-"<<current[1]<<endl;
                disjointIntervalsSize.push_back(prevEnd-prevStart+1);
                prevStart = current[0];
                prevEnd = current[1];
            }else if(current[0] > prevStart && current[1] > prevEnd){
                prevEnd = current[1];
            }else if(current[0] > prevStart && current[1] < prevEnd){
                //do nothing
            }
        }
        disjointIntervalsSize.push_back(prevEnd-prevStart+1);
        return disjointIntervalsSize;
    }
};