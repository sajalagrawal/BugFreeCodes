//https://leetcode.com/problems/hand-of-straights/

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize != 0) return false;
        int cardsRemaining = hand.size();
        map<int, int> cardCount;
        for(int card: hand){
            cardCount[card]++;
        }
        for(auto card : cardCount){
            int startingCardCount = card.second;
            if(card.second > 0){
                for(int i=0;i<groupSize;i++){
                    cardCount[card.first+i] -= startingCardCount;
                    if(cardCount[card.first+i] < 0)return false;
                }
            }
            // cout<<card.first<<" "<<cardCount[card.first]<<" "<<card.second<<endl;
        }
        
        return true;
    }
};