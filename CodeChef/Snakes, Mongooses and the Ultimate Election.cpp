//https://www.codechef.com/SNCKPB17/problems/SNELECT
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,i;
    cin>>t;
    string str;
    while(t--){
        int sna=0,mong=0,flag=0;
        cin>>str;
        for(i=0;i<str.size();i++){
            if(str[i]=='s')sna++;
            else mong++;
        }
        for(i=0;i<str.size()-1;i++){
            if(str[i]=='s' and str[i+1]=='m'){
                flag=1;
                str[i]='-';
                sna--;
            }
            else if(str[i]=='m' and str[i+1]=='s' and flag==0){
                sna--;
                str[i+1]='-';
            }else flag=0;
        }
        //cout<<"sna="<<sna<<"mong="<<mong<<"\n";
        if(sna>mong)cout<<"snakes\n";
        else if(sna<mong)cout<<"mongooses\n";
        else cout<<"tie\n";
    }
	return 0;
}
