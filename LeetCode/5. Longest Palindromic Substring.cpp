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


//2nd - same dp solution diff code 
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() == 0) return "";
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        int maxPalindromeLen = 0;
        string result;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++) {
                if(i>=j) {
                    dp[i][j] = true;
                } else {
                    if(s[i] == s[j]) {
                        dp[i][j] = dp[i+1][j-1];
                    }
                }

                if(dp[i][j] == true && (j-i+1) > maxPalindromeLen) {
                    maxPalindromeLen = j-i+1;
                    // cout<<maxPalindromeLen<<endl;
                    result = s.substr(i, j-i+1);
                }
            }
        }
        return result;
    }
};
