//https://www.codechef.com/LTIME48/problems/PREFINVS/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    int t,n,i,count=0,flag=0;
    string str;
    cin>>str;
    for(i=str.size()-1;i>=0;i--){
        if(str[i]=='1')break;
    }
    if(i>=0)flag=1;
    if(i==-1)cout<<"0\n";
//cout<<flag<<"\n";
    else{
        for(;i>=0;i--){
            if(str[i]=='1' and flag==0){
                count++;
                flag=1;
            }
            else if(str[i]=='0' and flag==1){
                count++;
                flag=0;
            }
        }
        cout<<count+1<<"\n";
    }
	return 0;
}
 