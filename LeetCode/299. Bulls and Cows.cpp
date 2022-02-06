//https://leetcode.com/problems/bulls-and-cows/

class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0, cows=0;
        int mapSecret[10]={0}, mapGuess[10]={0}; //0 to 9
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                bulls++;
            }else{
                mapSecret[secret[i]-'0']++;
                mapGuess[guess[i]-'0']++;
            }
        }
        for(int i=0;i<10;i++){
            cows+=min(mapSecret[i], mapGuess[i]);
        }
        return ""+to_string(bulls)+"A"+to_string(cows)+"B";
    }
};