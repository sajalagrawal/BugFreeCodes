//https://leetcode.com/problems/heaters/

class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());
        int radius=0;
        for(int i=0;i<houses.size();i++){
            radius=max(radius, findNearestHeaterDis(houses[i], heaters));
        }
        return radius;
    }
    
    int findNearestHeaterDis(int house, vector<int>& heaters){
        int low=0, high=heaters.size()-1, mid=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(heaters[mid]==house)return 0;
            if(heaters[mid]>house){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        //at this point low>high
        if(high==-1)return heaters[0]-house;
        if(low==heaters.size())return house-heaters[heaters.size()-1];
        return min(house-heaters[high], heaters[low]-house);
        
    }
    
};