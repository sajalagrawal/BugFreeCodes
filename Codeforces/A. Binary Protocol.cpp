//http://codeforces.com/contest/825/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

//problem statement is unclear 
//i/p: 1 100 o/p:100
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    ll count=0,ans=0;
    for(ll i=0;i<n;i++){
        //cout<<count<<endl;
        if(str[i]=='0'){
            ans=ans*10+count;
            count=0;
        }
        else count++;
    }
    ans=ans*10+count;
    cout<<ans<<"\n";
	return 0;
}
