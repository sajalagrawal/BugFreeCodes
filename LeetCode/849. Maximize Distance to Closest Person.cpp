//https://leetcode.com/problems/maximize-distance-to-closest-person/
#include<bits/stdc++.h>

class Solution {
public:
    int max(int a, int b){
        return (a>b?a:b);
    }
    
    int maxDistToClosest(vector<int>& seats) {
        int idxLeftOccupied=-1,idxRightOccupied=-1, leftmostOccupied=-1, rightmostOccupied=-1,bestSoFar=-1;
        for(int i=0;i<seats.size();i++){
            if(seats[i]==1){
                rightmostOccupied=i;
                if(leftmostOccupied==-1)leftmostOccupied=i;
                
                if(idxLeftOccupied==-1)idxLeftOccupied=i;
                else if(idxRightOccupied==-1){
                    idxRightOccupied=i;
                    bestSoFar=max(bestSoFar,(idxRightOccupied-idxLeftOccupied)/2);
                }
                
                if(idxLeftOccupied!=-1 and idxRightOccupied!=-1){
                    idxLeftOccupied=idxRightOccupied;
                    idxRightOccupied=i;
                    bestSoFar=max(bestSoFar,(idxRightOccupied-idxLeftOccupied)/2);
                }
            }
        }
        if(idxLeftOccupied!=-1 and idxRightOccupied!=-1){
            cout<<idxLeftOccupied<<" - "<<idxRightOccupied<<" - "<<bestSoFar<<endl;
            return max(max(leftmostOccupied, bestSoFar), seats.size()-1-rightmostOccupied);
        }else{
            return max(leftmostOccupied, seats.size()-1-rightmostOccupied);
        }               
    }
};
