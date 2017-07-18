//https://www.codechef.com/JULY17/problems/CHEFSIGN
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        int i=0;
        cin>>str;
        char ch;
        while(i<str.size() and str[i]=='=')i++;
        if(i==str.size())cout<<"1\n";
        else{
            if(i<str.size())ch=str[i++];
            int count=1,maxx=1;
            for(;i<str.size();i++){
                while(i<str.size() and (str[i]==ch or str[i]=='=')){
                    if(str[i]==ch)count++;
                    //cout<<"i="<<i<<"str[]:::"<<str[i]<<"count="<<count<<endl;
                    i++;
                }
                maxx=max(count,maxx);
                // cout<<"i="<<i<<endl;
                if(i==str.size())break;
                ch=str[i];
                //cout<<"i="<<i<<"count="<<count<<endl;
                count=1;
                
            }
            cout<<(maxx+1)<<endl;
        }
    }
	return 0;
}