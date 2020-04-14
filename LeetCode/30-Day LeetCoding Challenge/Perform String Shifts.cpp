class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int left = 0, right = 0;
        for(auto s : shift){
            if(s[0]==0)left+=s[1];
            else if(s[0]==1)right+=s[1];
        }
        cout<<"left="<<left<<" right="<<right<<endl;
        return actualShift(left-right, s);
    }
    
    string actualShift(int shift, string str){
        //shift = -ve for right
        //shift = +ve for left
        if(!shift)return str;
        if(shift>0){
            shift = shift%str.size();
            return str.substr(shift)+str.substr(0,shift);
        }else{
            shift=-shift;
            shift = shift%str.size();
            return str.substr(str.size()-shift)+str.substr(0,str.size()-shift);
        }
    }
};
