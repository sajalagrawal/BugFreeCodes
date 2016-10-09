//https://www.codechef.com/problems/VOTERS
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<string.h>
#include<map>
using namespace std;
 
int main()
{
    int t,n1,n2,n3,x,len=0;
    map<int,int> list;
    map<int,int>::iterator i;
    cin>>n1>>n2>>n3;
    n1=n1+n2+n3;
    while(n1--){
        cin>>x;
        list[x]++;
    }
    for(i=list.begin();i!=list.end();i++){
        if((i->second)>=2){
            len++;
        }
    }
    cout<<len<<"\n";
    for(i=list.begin();i!=list.end();i++){
        if((i->second)>=2){
            cout<<i->first<<"\n";
        }
    }
 
    return 0;
}
 
