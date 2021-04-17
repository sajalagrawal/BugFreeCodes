//AMZN
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0,d=0,i=0;
        for(;i<instructions.length();i++){
            if(instructions[i]=='L'){
                d--;
                if(d==-4)d=0;
            }else if(instructions[i]=='R'){
                d++;
                if(d==4)d=0;
            }else{
                if(d==0){
                    y++;
                }else if(d==1 or d==-3){
                    x++;
                }else if(d==2 or d==-2){
                    y--;
                }else if(d==3 or d==-1){
                    x--;
                }
            }
        }
        if(x==0 && y==0)return true;
        if(d!=0)return true;
        return false;
    }
};
