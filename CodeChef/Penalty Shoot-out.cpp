//https://www.codechef.com/DEC17/problems/CPLAY
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    while(true){
        string str;
        cin>>str;
        int countA=0,countB=0,i;
        if(str.size()==0)break;
        //cout<<str<<endl;
        for(i=0;i<=8;i=i+2){
            if(str[i]=='1')countA++;
            if((countA+5-(i+2)/2)<countB){
                //cout<<"i="<<i<<endl;
                cout<<"TEAM-B "<<(i+1)<<"\n";
                goto conti;
            }
            if(countA>countB+(10-i)/2){
                cout<<"TEAM-A "<<(i+1)<<"\n";
                goto conti;
            } 
            if(str[i+1]=='1')countB++;
            if((countB+5-(i+2)/2)<countA){
                cout<<"TEAM-A "<<(i+2)<<"\n";
                goto conti;
            }  
            if(countB>countA+(8-i)/2){
                cout<<"TEAM-B "<<(i+2)<<"\n";
                goto conti;
            }
        }
        for(i=10;i<=18;i=i+2){
            if(str[i]=='1')countA++;
            if(str[i+1]=='1')countB++;
            if(countA<countB){
                cout<<"TEAM-B "<<(i+2)<<"\n";
                goto conti;
            }
            if(countA>countB){
                cout<<"TEAM-A "<<(i+2)<<"\n";
                goto conti; 
            }
        }
        cout<<"TIE\n";
        conti:;
    }
	return 0;
}


/*
11111111010000000000
ans=TEAM-B 10
*/