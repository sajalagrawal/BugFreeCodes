//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int wtSum = 0, maxWt = 0;
        for(int wt : weights){
            wtSum+=wt;
            maxWt = max(maxWt, wt);
        }

		//Binary Search on weight range
        //min capacity required, max capacity required
        int left = maxWt, right = wtSum, ans=right;
        
        while(left <= right){
            int mid = left + (right-left)/2;

            //check days required for ship with capacity = mid;
            int daysReq = 0, curWt = 0;
            for(int i=0;i<weights.size();i++){
                curWt += weights[i];
                if(curWt > mid){
                    daysReq++;
                    curWt = weights[i];
                }
            }
            daysReq++;

            if(daysReq <= days){
                right = mid-1;
                ans = min(ans, mid);
            }else{
                left = mid+1;
            }            
        }   

        return ans;
    }
};