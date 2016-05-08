//https://www.codechef.com/problems/LCH15JAB
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;
 
int main()
{
    int t,i;
    char s[50];
    int a[26];
    cin>>t;
    while(t--){
      cin>>s;
      int sum=0;
      int len=strlen(s);
      for(i=0;i<26;i++)
        a[i]=0;
      for(i=0;i<len;i++)
        a[s[i]-'a']++;
      sort(a,a+26);
      for(i=0;i<=24;i++)
        sum=sum+a[i];
      if(a[25]==sum)
        cout<<"YES\n";
      else
        cout<<"NO\n";
    }
    return 0;
}
