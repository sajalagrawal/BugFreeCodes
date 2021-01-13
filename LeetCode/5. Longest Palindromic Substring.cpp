//GOOGL

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size(),i,ans=1,st=0,e=0,counter=3;
        int dp[1000][1000]={0,};
        for(i=0;i<n;i++){
            dp[i][i]=1;
        }
        for(i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                st=i;
                e=i+1;
            }
        }
        while(counter<=n){
           for(i=0;i<=n-counter;i++){
                if(s[i]==s[i+counter-1]){
                    dp[i][i+counter-1]=dp[i+1][i+counter-2];
                    if(dp[i+1][i+counter-2]){
                        st=i;
                        e=i+counter-1;
                    }
                }
            } 
            counter++;
        }
        return s.substr(st,e-st+1);
        
    }
};
