//https://www.codechef.com/problems/FLOW010
//Author - Sajal Agrawal
//@sajalagrawal

#include<iostream>
using namespace std;
main(){
int t,j,i=0;
char ch[1000];
int k[1000];
cin>>t;
j=t;
while(t--){
    cin>>ch[i];
    k[i]=(int)ch[i];
    i++;
}
i=0;
while(j--){
    if(k[i]==66||k[i]==98)
        cout<<"BattleShip\n";
    else if(k[i]==67|| k[i]==99)
        cout<<"Cruiser\n";
    else if(k[i]==68||k[i]==100)
        cout<<"Destroyer\n";
    else if(k[i]==70||k[i]==102)
        cout<<"Frigate\n";
        i++;
}
return 0;
}
