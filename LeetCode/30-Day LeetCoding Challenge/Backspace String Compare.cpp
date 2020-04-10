//Sol2 - O(n) time O(1) space complexity
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i=S.length()-1,j=T.length()-1,count=0;
        while(i>=0 or j>=0){
            while(i>=0){
                if(S[i]=='#'){
                    count++;
                    i--;
                }else if(S[i]!='#' and count){
                    count--;
                    i--;
                }else{
                    break;
                }
            }
            count=0;
            while(j>=0){
                if(T[j]=='#'){
                    count++;
                    j--;
                }else if(T[j]!='#' and count){
                    count--;
                    j--;
                }else{
                    break;
                }
            }
            count=0;
            cout<<"i="<<i<<" j="<<j<<endl;
            if(i>=0 and j>=0 and S[i]!=T[j])return false;
            else if(i>=0 and j>=0 and S[i]==T[j]){
                cout<<"S["<<i<<"] == T["<<j<<"]"<<endl;
                i--;
                j--;
            }else if((i==-1 and j>=0) or (j==-1 and i>=0))return false;
        }
        
        if(i>-1 or j>-1)return false;       
        return true;
    }
};


/*
"pxab##"
"pxac#c##"
o/p = true

"nzp#o#g"
"b#nzp#o#g"
o/p = true


"b"
"#b"
true
*/



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
