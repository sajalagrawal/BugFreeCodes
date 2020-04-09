//Sol1 - Using string.erase() method
//But string.erase() method has it's own time complexity - generally up to linear in the new string length.
//http://www.cplusplus.com/reference/string/string/erase/
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        S=simplify(S);
        cout<<"S="<<S<<endl;
        T=simplify(T);
        cout<<"T="<<T<<endl;
        if(S==T)return true;
        return false;
    }
    
    string simplify(string S){
        for(int i=0;i<S.length();i++){
            if(i==0 and S[i]=='#'){
                S.erase(i,1);
                i--;
            }
            else if(S[i]=='#' and S[i-1]!='#'){  //elseif and not if
                S.erase(i-1,2);
                i=i-2;
            }
        }
        return S;
    }
};
