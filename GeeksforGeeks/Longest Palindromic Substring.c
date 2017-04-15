//http://www.geeksforgeeks.org/longest-palindrome-substring-set-1/

#include <stdio.h>
#include <string.h>
#include<stdbool.h>

void printSubstr(char str[],int start,int end){
    int i;
    for(i=start;i<=end;i++){
        printf("%c",str[i]);
    }
    printf("\n");
}
void longestPalinSubstring(char str[]){
    int n=strlen(str),i,k;
    bool dp[n][n];
    memset(dp, 0, sizeof(dp));

    //of substring of lengrh 1 is palindrome.
    for(i=0;i<n;i++)dp[i][i]=true;
    int maxLen=1,start=0;
    for(i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            dp[i][i+1]=true;
            start=i;
            maxLen=2;
        }
    }
    for(k=3;k<=n;k++){
        for(i=0;i<n-k+1;i++){
            int j=i+k-1;
            if(dp[i+1][j-1]==true && str[i]==str[j]){
                dp[i][j]=true;
                if(k>maxLen){
                    start=i;
                    maxLen=k;
                }
            }
        }
    }

    printf("\nlongest substring:");
    printSubstr(str,start,start+maxLen-1);
}
int main(void) {
    char str[20];
    printf("Enter string:");
    scanf("%s",str);
    longestPalinSubstring(str);
	  return 0;
}

