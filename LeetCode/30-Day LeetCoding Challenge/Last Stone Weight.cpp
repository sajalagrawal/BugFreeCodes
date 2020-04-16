class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap;
        for(int i=0;i<stones.size();i++)heap.push(stones[i]);
        while(heap.size()>=2){
            cout<<"heap size="<<heap.size()<<endl;
            int topmost = heap.top();
            heap.pop();
            int secondTopmost = heap.top();
            heap.pop();
            if(topmost != secondTopmost){
                heap.push(topmost - secondTopmost);
            }
        }
        //even if heap is empty, heap.top() is returning elements
        if(heap.size())return heap.top();
        return 0;
    }
};
