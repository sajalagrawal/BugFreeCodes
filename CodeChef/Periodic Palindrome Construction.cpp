//https://www.codechef.com/problems/PERPALIN
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
void solve(){
    int n,p,i,pp;
    cin>>n>>p;
    pp=p;
    if(p<=2 or n%p!=0){
        cout<<"impossible\n";
        return;
    }
    string str="";
    str+='a';
    p--;
    while(p>1){
        str+='b';
        p--;
    }
    str+='a';
    //cout<<"str="<<str<<endl;
    int rep=n/pp;
    string ans="";
    for(i=0;i<rep;i++){
        ans+=str;
        //cout<<"ans="<<ans<<endl;
    }
    cout<<ans<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
