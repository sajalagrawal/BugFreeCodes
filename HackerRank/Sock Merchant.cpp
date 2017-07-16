//https://www.hackerrank.com/challenges/sock-merchant/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,k;
    cin>>n;
    map<int,int> mp;
    while(n--){
        cin>>k;
        mp[k]++;
    }
    int ans=0;
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        ans+=(*it).second/2;
    }
    cout<<ans<<"\n";
	return 0;
}
