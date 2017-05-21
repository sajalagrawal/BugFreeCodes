//https://www.codechef.com/COOK82/problems/COOK82A/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--){
        string str;
        int r,m,b,e,k;
        for(int i=0;i<4;i++){
            cin>>str;
            cin>>k;
            if(str=="Barcelona")b=k;
            else if(str=="Malaga")m=k;
            else if(str=="RealMadrid")r=k;
            else e=k;
        }
        if(r<m and b>e){
            cout<<"Barcelona\n";
        }else{
            cout<<"RealMadrid\n";
        }
    }
	return 0;
}