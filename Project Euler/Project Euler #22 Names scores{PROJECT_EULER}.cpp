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
    ll n=0,i,ans=0,q;
    string a[6000];
    while(1){
        string str;
        //cin>>str;
        getline(cin,str, ',' );
        if(str.size()==0)break;
        str.erase(0,1);
        str.erase(str.size()-1,1);
        //cout<<str<<endl;
        
        a[n++]=str;
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        ans+=(i+1)*solve(a[i]);
    }
    cout<<ans<<"\n";    
	return 0;
}
