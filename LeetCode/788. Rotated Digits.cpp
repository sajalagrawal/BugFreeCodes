//https://leetcode.com/problems/rotated-digits/

class Solution {
public:
    int rotatedDigits(int n) {
        // -1 suggests invalid mirror, else store mirror image in dp
        int mirror[10005]={0,1,5,-1,-1,2,9,-1,8,6}, countOfGood=0;
        for(int i=1;i<=n;i++){
            int num=i;
            
            int remainder = num%10;
            int numByTen = num/10;
            if(mirror[numByTen]==-1 or mirror[remainder]==-1){
                mirror[i]=-1;
                continue;
            }
            mirror[i]=mirror[numByTen]*10 + mirror[remainder];
            if(mirror[i]!=i){
                countOfGood++;
            }
            
            
        }
        return countOfGood;   
    }
};