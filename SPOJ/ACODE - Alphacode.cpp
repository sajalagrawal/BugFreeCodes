//http://www.spoj.com/problems/ACODE/
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[5001];

int main() {
    string str;
    while(true){
        cin>>str;
        ll i;
        memset(dp,0,sizeof dp);
        if(str[0]=='0')break;
        //cout<<str<<endl;
        dp[0]=1;
        for(i=1;i<str.size();i++){
            if(str[i]>='1' and str[i]<='9')dp[i]=dp[i-1];
            if((str[i-1]=='1' and str[i]>='0') or (str[i]>='0' and str[i]<='6' and str[i-1]=='2')){
                if(i>=2)
                	dp[i]+=dp[i-2];
                else dp[i]+=1;
            }
            //cout<<dp[i]<<endl;
        }
        cout<<dp[str.size()-1]<<"\n";
    }
	return 0;
}
