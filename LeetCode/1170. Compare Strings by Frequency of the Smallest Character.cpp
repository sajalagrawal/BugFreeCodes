//GOOGL
class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        int i,j,count;
        vector<int> q, w, ans;
        for(i=0;i<queries.size();i++){
            q.push_back(solve(queries[i]));
        }
        for(i=0;i<words.size();i++){
            w.push_back(solve(words[i]));
        }
        for(i=0;i<q.size();i++){
            count=0;
            for(j=0;j<w.size();j++){
                if(q[i]<w[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
    
    int solve(string s){
        int f[26]={0},i,maxx=0;
        for(i=0;i<s.size();i++){
            f[s[i]-'a']++;
        }
        for(i=0;i<26;i++){
            if(f[i]){
                maxx=f[i];
                break;
            }
        }
        return maxx;
    }
};
