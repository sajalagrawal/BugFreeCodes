//https://leetcode.com/problems/koko-eating-bananas/description/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = 0;
        for(int pile : piles){
            maxPile = max(maxPile, pile);
        }
        
        int left = 1, right = maxPile, k = maxPile;  
        while(left <= right){
            int mid = left + (right-left)/2;
            
            //check if koko can eat all bananas within h hours if her speed is mid
            long long hrsReq = 0;
            for(int i=0; i<piles.size(); i++){
                hrsReq += ceil((double)piles[i]/mid); //int int division!
            }
            //cout<<"mid "<<mid<<" "<<hrsReq<<endl;
            if(hrsReq <= h){
                k = min(k, mid);
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        
        return k;
    }
};