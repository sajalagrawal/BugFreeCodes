//https://www.hackerrank.com/contests/code-blitz-002/challenges/advance-keypad
//Author - SAJAL AGRAWAL
//@sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int ar[]={2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77,777,7777,8,88,888,9,99,999,9999};
          
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    string str;
    getchar();
    for(int j=0;j<t;j++){
       getline(cin, str);
       for(int i=0;i<str.size();i++){
           if(i){
                if((ar[str[i]-'a']%10)==(ar[str[i-1]-'a']%10))cout<<" ";
           }
           if(str[i]==' ')cout<<"0";
           else cout<<ar[str[i]-'a'];
       }
        cout<<"\n";
    }
              
    return 0;
}
