//https://www.codechef.com/problems/LADDU
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int t,activities,sum,rank,severity;
    char origin[15],acname[30];
    cin>>t;
    while(t--){
        cin>>activities;
        cin>>origin;
        sum=0;
        while(activities--){
            cin>>acname;
            if(strcmp(acname,"CONTEST_WON")==0){
                cin>>rank;
                sum+=300;
                if(rank<=20){
                    sum+=20-rank;
                }
            }else if(strcmp(acname,"TOP_CONTRIBUTOR")==0){
                sum+=300;
            }else if(strcmp(acname,"BUG_FOUND")==0){
                cin>>severity;
                sum+=severity;
            }else if(strcmp(acname,"CONTEST_HOSTED")==0){
                sum+=50;
            }
        }
        if(strcmp(origin,"INDIAN")==0)sum=sum/200;
        else if(strcmp(origin,"NON_INDIAN")==0)sum=sum/400;
        cout<<sum<<"\n";
    }
    return 0;
}
