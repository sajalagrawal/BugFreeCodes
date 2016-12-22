//https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/little-monk-and-good-string/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
bool isVowel(char ch){
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return true;
        default: return false;
    }
}
int main()
{
    char str[100001];
    cin>>str;
    int i=0,len=0,maxLen=0,flag=0;
    while(str[i]!='\0'){
        while(isVowel(str[i])){
            len++;
            i++;
        }
        if(len>maxLen)maxLen=len;
        len=0;
        i++;
    }
    cout<<maxLen<<"\n";
    return 0;
}
