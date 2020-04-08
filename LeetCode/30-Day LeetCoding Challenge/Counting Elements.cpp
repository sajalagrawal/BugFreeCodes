class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int, int> mp;
        for(int i=0;i<arr.size();i++)mp[arr[i]]++;
        int res=0;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]+1])res++;
        }
        return res;
    }
};

/*
I/P = [0,1,2,3,3,5]
O/P = 3
0 -> 1
1 -> 2
2 -> 3 (3 is counted only once)

I/P = [1,1,2,3]
O/P = 3
1 -> 2
1 -> 2
2 -> 3
*/
