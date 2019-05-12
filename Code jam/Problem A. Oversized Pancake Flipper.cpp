//https://code.google.com/codejam/contest/dashboard?c=3264486#s=p0
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
    int t,k,tt,i,j;
    string s;
    cin>>t;
    for(tt=0;tt<t;tt++){
        int count=0;
        cin>>s;
        cin>>k;
        for(i=0;i<=s.size()-k;i++){
            if(s[i]=='-'){
                for(j=i;j<=i+k-1;j++){
                    //cout<<"j="<<j<<"i="<<i<<endl;
                    if(s[j]=='-')s[j]='+';
                    else s[j]='-';
                }
                count++;
            }
        }
        int flag=1;
        cout<<"Case #"<<(tt+1)<<": ";
        for(i=s.size()-k+1;i<s.size();i++){
            //cout<<"i="<<i<<"s[]"<<s[i]<<endl;
            if(s[i]=='-'){
                flag=0;
                break;
            }
        }
        //cout<<"flag="<<flag<<endl;
        if(flag)cout<<count<<"\n";
        else cout<<"IMPOSSIBLE\n";
    }
	return 0;
}
