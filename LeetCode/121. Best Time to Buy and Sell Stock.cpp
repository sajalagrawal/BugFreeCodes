//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyIndex=0, maxProfit=0;
        for(int i=0; i<prices.size(); i++){
            if(prices[i] > prices[buyIndex]){
                maxProfit = max(maxProfit, prices[i] - prices[buyIndex]);
            }else if(prices[i] < prices[buyIndex]){
                buyIndex = i;
            }
        }
        return maxProfit;
    }
};