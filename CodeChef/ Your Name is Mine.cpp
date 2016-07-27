//https://www.codechef.com/problems/NAME2
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<string.h>
using namespace std;
bool contains(char* w,char* m){
    while(*w){
        if(*w==*m){
            m++;
        }
        w++;
    }
    if(*m=='\0'){
        return true;
    }
    return false;
}
 
int main()
{
    char m[25001],w[25001];
    int t;
    cin>>t;
    while(t--){
        cin>>m>>w;
        if(strlen(m)>strlen(w)){
            if(contains(m,w)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        }else{
            if(contains(w,m)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        }
    }
    return 0;
}

//same implementation with some changes
/*
#include <iostream>
 
using namespace std;
bool contains(char* w,char* m){
    while(*w){
        if(*w==*m){
            m++;
        }
        w++;
    }
    if(*m=='\0'){
        return true;
    }
    return false;
}
 
int main()
{
    char m[25001],w[25001];
    int t;
    cin>>t;
    while(t--){
        cin>>m>>w;
        if(contains(m,w) || contains(w,m)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
*/
