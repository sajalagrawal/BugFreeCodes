//https://leetcode.com/problems/fruit-into-baskets/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int secondLastFruit=-1, lastFruit=-1, lastFruitCount=0, maxLen=0, curLen=0;
        
        for(int i=0;i<fruits.size();i++){
            if(fruits[i]==secondLastFruit  or fruits[i]==lastFruit){
                curLen++;
            }else{
                curLen=lastFruitCount+1;
            }
            
            if(fruits[i]==lastFruit){
                lastFruitCount++;
            }else{
                secondLastFruit=lastFruit;
                lastFruit=fruits[i]; 
                lastFruitCount=1;
            }
            
            maxLen=max(maxLen, curLen);
        }
        
        return maxLen;
    }
};
