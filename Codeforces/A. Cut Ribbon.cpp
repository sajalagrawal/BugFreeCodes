//http://codeforces.com/problemset/problem/189/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,a,b,c,i;
    cin>>n>>a>>b>>c;
    ll dp[9000];
    memset(dp,-1,sizeof dp);
    dp[a]=dp[b]=dp[c]=1;
    for(i=min(a,min(b,c));i<5000;i++){
        if(dp[i]!=-1){
            dp[i+a]=max(dp[i+a],dp[i]+1);
            dp[i+b]=max(dp[i+b],dp[i]+1);
            dp[i+c]=max(dp[i+c],dp[i]+1);    
        }
    }
    //for(i=0;i<=10;i++)cout<<dp[i]<<" ";
    //cout<<endl;
    if(dp[n]!=-1)cout<<dp[n]<<"\n";
    else cout<<"-1\n";
	return 0;
}


//2nd method 
//http://codeforces.com/problemset/problem/189/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll n,a,b,c,x,y,ans=-1;
    double z;
    cin>>n>>a>>b>>c;
    //ax+by+cz=n find max(x+y+z)
    for(x=0;x<=n/a;x++){
        for(y=0;y<=n/b;y++){
            z=(n-a*x-b*y)/(double)c;
            //cout<<"buzzzzzzzz="<<z<<endl;
            if(z>=0 and z==floor(z)){
                ans=max(ans,(ll)(x+y+z));
                //cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
            }
        }
    }
    cout<<ans<<"\n";
	return 0;
}
