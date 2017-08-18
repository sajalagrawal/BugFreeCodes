//https://www.codechef.com/AUG17/problems/PALINGAM
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        //cout<<"a="<<a<<"   b="<<b<<endl;
        int d[26]={0},e[26]={0},i,maxx=-1,index=-1;
        for(i=0;i<a.size();i++)d[a[i]-'a']++;
        for(i=0;i<b.size();i++)e[b[i]-'a']++;
        string ans="";
        for(i=0;i<26;i++){
            if(e[i]==0 and d[i]>0){
                if(d[i]>maxx){
                    index=i;
                    maxx=d[i];
                }
            }
        }
        if(maxx!=-1){
            ans+=char('a'+index);
            //cout<<ans<<endl;
            d[index]--;
        }
        if(maxx==-1){
            cout<<"B\n";
            continue;
        }
        int flag=0;
        index=-1;
        for(i=0;i<26;i++){
            if(d[i]==0 and e[i]>0){
                flag=1;
                index=i;
            }
        }
        int check=-1;
        if(flag==1){
            ans+=char('a'+index);
            //cout<<ans<<endl;
            e[index]--;
            check=(char)ans[0]-'a';
            //cout<<"check="<<check<<endl;
            if(d[check]>0){
                cout<<"A\n";
                continue;
            }
        }else{
            cout<<"A\n";
            continue;
        }
        cout<<"B\n";
    }
	return 0;
}
