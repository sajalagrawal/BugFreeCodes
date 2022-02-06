//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0, buyIndex=0, sellIndex=-1, currentProfit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i] >= prices[i-1]){
                sellIndex = i;
                currentProfit = max(currentProfit, prices[i]-prices[buyIndex]);
            }
            if(prices[i] < prices[i-1]){
                buyIndex = i;
                sellIndex = -1;
                profit += currentProfit;
                currentProfit = 0;
            }
            
        }
        profit += currentProfit;
        return profit;
    }
};


//IMP
public int maxProfit(final int[] A) {
   if (A.length <= 1)
        return 0;
    int maxprofit = 0;
    for (int i = 1; i < A.length; i++) {
        maxprofit += Math.max(0, A[i] - A[i - 1]);
    }
    return maxprofit;
}