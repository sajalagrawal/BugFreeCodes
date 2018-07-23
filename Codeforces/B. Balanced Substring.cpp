//http://codeforces.com/problemset/problem/873/B
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll n,i,ans=0,j;
    cin>>n;
    string s;
    cin>>s;
    ll a[200001];
    int start=100000;
    //memset(a,-1,sizeof a);
    for(i=0;i<200001;i++)a[i]=LLONG_MIN;
    a[100000]=-1;
    for(i=0;i<n;i++){
        if(s[i]=='1')start++;
        else start--;
        if(a[start]==LLONG_MIN)a[start]=i;
        if(a[start]!=LLONG_MIN)ans=max(ans,(i-a[start]));
    }
    cout<<ans<<"\n";
	return 0;
	
}
