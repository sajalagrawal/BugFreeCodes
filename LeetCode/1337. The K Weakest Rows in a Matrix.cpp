class Compare{
    public:
        bool operator()(pair<int, int> a, pair<int, int> b){
            if (a.first < b.first) return true;
            if (a.first == b.first) return a.second < b.second;
            return false;
        }
};

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> maxHeap;
        int index = 0;
        for (auto row : mat){
            //cout<<<<endl;
            maxHeap.push(make_pair(countOnes(row), index++));
            //will create a maxHeap with at most k elements
            if (maxHeap.size() > k){
                maxHeap.pop();
            }
        }
        vector<int> weakestRowIndices;
        while(k--){
            weakestRowIndices.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        reverse(weakestRowIndices.begin(), weakestRowIndices.end());
        return weakestRowIndices;
    }

    //binary search 
    int countOnes(vector<int> arr) {
        int low = 0, high = arr.size()-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if (arr[mid] == 0){
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        return low;
    }
};