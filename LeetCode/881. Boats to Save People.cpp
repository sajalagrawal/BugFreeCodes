//https://leetcode.com/problems/boats-to-save-people/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int left = 0, high = people.size()-1, numBoats = 0;
        while(left <= high){
            if(left ==  high){
                numBoats++;
                break;
            }
            if(people[left] + people[high] <= limit){
                numBoats++;
                left++;
                high--;
            }else{
                numBoats++;
                high--;
            }
        }
        return numBoats;
    }
};