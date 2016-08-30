//https://www.codechef.com/problems/ALPHABET
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,i,a[26]={0};
    char s[26];
    cin>>s;
    for(i=0;i<strlen(s);i++){
        a[s[i]-'a']++;
    }
    cin>>n;
    while(n--){
        char w[12];
        cin>>w;
        int flag=1;
        for(i=0;i<strlen(w);i++){
            if(a[w[i]-'a']<=0){
                flag=0;
                break;
            }
        }
        if(flag==1) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
