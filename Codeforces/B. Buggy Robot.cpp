//http://codeforces.com/problemset/problem/888/B
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,l=0,r=0,u=0,d=0,i;
    string str;
    scanf("%d",&n);
    getchar();
    //cout<<"n="<<n<<endl;
    getline(cin,str);
    //cout<<"str="<<str<<endl;
    for(i=0;i<n;i++){
        if(str[i]=='U')u++;
        else if(str[i]=='D')d++;
        else if(str[i]=='L')l++;
        else if(str[i]=='R')r++;
    }
    int ans=min(l,r)*2+min(u,d)*2;
    printf("%d\n",ans);
	return 0;
}
