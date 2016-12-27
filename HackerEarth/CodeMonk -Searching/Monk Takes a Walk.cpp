//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/monk-takes-a-walk/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
bool isVowel(char ch);
int main()
{
    int t;
    cin>>t;
    while(t--){
        char str[100001];
        cin>>str;
        int i=0,ans=0;
        while(str[i]!='\0'){
            if(isVowel(str[i]))ans++;
            i++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}

bool isVowel(char ch){
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':return true;
        default:return false;
    }
}
