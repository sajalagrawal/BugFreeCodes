//AMZN
#define MOD 1000000007

class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        long long i=0,hmax=0, wmax=0;
        for(i=1;i<horizontalCuts.size();i++){
            if(horizontalCuts[i]-horizontalCuts[i-1] > hmax){
                hmax = horizontalCuts[i]-horizontalCuts[i-1];
            }
        }
        for(i=1;i<verticalCuts.size();i++){
            if(verticalCuts[i]-verticalCuts[i-1] > wmax){
                wmax = verticalCuts[i]-verticalCuts[i-1];
            }
        }
        return (hmax%MOD * wmax%MOD)%MOD;
        
    }
};
