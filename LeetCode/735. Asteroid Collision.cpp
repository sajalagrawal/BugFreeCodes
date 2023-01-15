//https://leetcode.com/problems/asteroid-collision/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(int ast : asteroids){
            //first push each asteroid in stack and then figure out the collisions
            s.push(ast);
            
            while(s.size() > 1){
                int top = s.top();
                s.pop();
                int secondTop = s.top();
                s.pop();
                
                //top should go left and secondTop should go right to have a collision
                if(top < 0 && secondTop > 0){
                    if(abs(top) < secondTop){
                        s.push(secondTop);
                    }else if (abs(top) > secondTop){
                        s.push(top);
                    }else { //both are equal
                        
                    }
                }else{
                    s.push(secondTop);
                    s.push(top);
                    break;
                }
            }
        }
        vector<int> result;
        while(!s.empty()){
            result.push_back(s.top());
            s.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};