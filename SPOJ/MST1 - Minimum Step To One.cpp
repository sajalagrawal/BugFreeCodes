//GOOGL

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t,n,i;
	int dp[20000010];
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	for(i=4;i<20000010;i++){
		dp[i]=dp[i-1]+1;
		if(i%2==0) dp[i]=min(dp[i], dp[i/2]+1);
		if(i%3==0) dp[i]=min(dp[i], dp[i/3]+1);
	}
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>n;
		cout<<"Case "<<i<<": "<<dp[n]<<endl;
	}
	return 0;
}
