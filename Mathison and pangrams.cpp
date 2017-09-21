//https://www.codechef.com/LTIME51/problems/MATPAN
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,i;
    cin>>t;
    while(t--){
        int p[26],a[26]={0};
        for(i=0;i<26;i++)cin>>p[i];
        string str;
        cin>>str;
        for(i=0;i<str.size();i++){
            a[str[i]-'a']++;
        }
        ll ans=0;
        for(i=0;i<26;i++){
            if(a[i]==0)ans+=p[i];
        }
        cout<<ans<<"\n";
    }
	return 0;
}
