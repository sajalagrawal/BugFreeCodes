//http://www.geeksforgeeks.org/remove-character-string-make-palindrome/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(char str[],int l,int r){
    int i=l,j=r;
    for(;i<j;i++,j--){
        if(str[i]!=str[j])return false;
    }
    return true;
}

int palindromeByRemovingOneChar(char str[]){
    int l=0,r=strlen(str)-1;
    while(l<r){
        if(str[l]==str[r]){
            l++;
            r--;
        }
        else{
            if(isPalindrome(str,l+1,r))return l;
            if(isPalindrome(str,l,r-1))return r;
            return -1;
        }
    }
    return -2;
}
main(){
    char str[20];
    printf("Enter string:");
    scanf("%s",str);
    int ans=palindromeByRemovingOneChar(str);
    if(ans==-1)
        printf("Not possible.");
    else if(ans==-2)
        printf("Already palindrome.");
    else
        printf("Almost Palindrome. Remove char at: %d",ans);
}
