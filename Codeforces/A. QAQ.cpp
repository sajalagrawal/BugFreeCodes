//http://codeforces.com/contest/894/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    string str;
    getline(cin,str);
    int i,q=0,till=0;
    ll ans=0;
    for(i=0;i<str.size();i++){
        if(str[i]=='Q')q++;
    }
    for(i=0;i<str.size();i++){
        if(str[i]=='Q')till++;
        if(str[i]=='A')ans+=till*(q-till);
    }
    printf("%lld\n",ans);
	return 0;
}


//2nd method-

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    string str;
    getline(cin,str);
    int a=0,q=0,ans=0,i;
    for(i=0;i<str.size();i++){
        if(str[i]=='Q'){
            q++;
            ans=ans+a;
        }else if(str[i]=='A'){
            a=a+q;
        }
    }
    printf("%d\n",ans);
	return 0;
}
