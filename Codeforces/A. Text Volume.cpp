//http://codeforces.com/contest/837/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n;
    cin>>n;
    string str;
    getchar();
    getline(cin,str);
    //cout<<str<<endl;
    int maxx=0,count=0;
    for(int i=0;i<n;i++){
        if(str[i]==' ')count=0;
        else if(str[i]>='A' and str[i]<='Z'){
            //cout<<"i="<<i<<endl;
            count++;
        }
        maxx=max(maxx,count);
    }
    cout<<maxx<<"\n";
	return 0;
}
