//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/monk-teaches-palindrome/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<string.h>
using namespace std;
 
int main()
{
    int t,i,j;
    cin>>t;
    while(t--){
        char str[100001];
        cin>>str;
        int flag=1;
        for(i=0,j=strlen(str)-1;i<j;i++,j--){
            if(str[i]!=str[j]){
                flag=0; //not palindrome
                break;
            }
        }
        if(flag==0)cout<<"NO\n";
        else{
            if(strlen(str)%2==0)cout<<"YES EVEN\n";
            else cout<<"YES ODD\n";
        }
    }
    return 0;
}
