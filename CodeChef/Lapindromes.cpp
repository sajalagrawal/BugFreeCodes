//https://www.codechef.com/problems/LAPIN
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int t,len,i;
    string str,s2;
    cin>>t;
    while(t--){
        cin>>str;
        int a[26]={0},b[26]={0},flag=0;
        len=str.size();
        if(len%2==0){
            s2=str.substr(len/2);
        }
        else{
            s2=str.substr(len/2+1);
        }
        str=str.substr(0,len/2);
        i=0;
        while(str[i]!='\0'){
            a[str[i]-'a']++;
            i++;
        }
        i=0;
        while(s2[i]!='\0'){
            b[s2[i]-'a']++;
            i++;
        }
        for(i=0;i<26;i++){
            if(a[i]!=b[i]){
                flag=1; break;
            }
        }
        if(flag==1)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
