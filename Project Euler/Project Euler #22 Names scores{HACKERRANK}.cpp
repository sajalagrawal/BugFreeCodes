//https://www.hackerrank.com/contests/projecteuler/challenges/euler022
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
ll solve(string str){
    int i,res=0;
    for(i=0;i<str.size();i++){
        if(str[i]>='a' and str[i]<='z')res+=str[i]-'a'+1;
        else res+=str[i]-'A'+1;
    }
    return res;
}
int main() {
    int n,i,ans=0,q;
    cin>>n;
    string a[n];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        for(i=0;i<n;i++){
            if(a[i]==str)ans=(i+1)*solve(a[i]);
        }
       cout<<ans<<"\n";    
    }
    
	return 0;
}
