#define ll long long

//GOOGL
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n <= 4) return 0;
        sort(nums.begin(), nums.end());
        //ll min=nums[n-1] - nums[0];
        ll a=nums[n-1]-nums[3];
        ll b=nums[n-2]-nums[2];
        ll c=nums[n-3]-nums[1];
        ll d=nums[n-4]-nums[0];
        return min(a,min(b,min(c,d)));
        
    }
};


/*
what if
array - 5 5 5 9 16 17 18 19
we cant always look at the largest diff on corner elements
otherwise in this case we will choose 
19->18 
18->17 
17->16

but more optimal sol available-
5->5
5->5
5->9
*/
