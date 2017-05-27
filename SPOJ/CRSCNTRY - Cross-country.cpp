//http://www.spoj.com/problems/CRSCNTRY/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

vector<int> a;
vector<int> tom;
int dp[2001][2001];
int lcs(){
    for(int i=0;i<=a.size();i++){
        for(int j=0;j<=tom.size();j++){
            if(i==0 || j==0)dp[i][j]=0;
            else if(a[i-1]==tom[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    return dp[a.size()][tom.size()];
}

int main() {
    int t,k;
    cin>>t;
    while(t--){
        int ans=0;
        a.clear();
        tom.clear();
        while(true){
            cin>>k;
            if(k==0)break;
            a.push_back(k);
        }
        
        while(true){
            tom.clear();
            cin>>k;
            if(k==0)break;
            tom.push_back(k);
            while(true){
                cin>>k;
                if(k==0)break;
                tom.push_back(k);
            }
            ans=max(ans,lcs());
        }
        cout<<ans<<"\n";
    }
	return 0;
}
