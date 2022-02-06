//https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> cardCount;
        for(int i=0;i<deck.size();i++){
            cardCount[deck[i]]++;
        }
        int gcd=0;
        for(auto entry: cardCount){
            gcd=__gcd(gcd, entry.second);
        }
        return gcd>=2 ? true : false;
    }
};