class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())return 0;
        int buy=-1, sell=-1;
        int profit=0;
        //[7,1,5,3,6,4]
        //[1,5,5,1,6]
        //[1,5,4,100]
        //[2,1,5]
        //[1,2,3]
        for(int i=0;i<prices.size()-1;i++){
            if(buy==-1 and prices[i]<prices[i+1]){
                cout<<"buy at:"<<i<<endl;
                buy=i;
                sell=-1;
            }else if(buy!=-1 and prices[i]>=prices[i+1]){
                cout<<"sell at:"<<i<<endl;
                sell=i;
                profit+=prices[sell]-prices[buy];
                buy=-1;
            }
        }
        if(buy!=-1){
            if(prices[prices.size()-1]>prices[buy])profit+=prices[prices.size()-1]-prices[buy];
        }
        return profit;
    }
};
