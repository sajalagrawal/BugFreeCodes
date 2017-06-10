//https://www.codechef.com/problems/MARCHA1
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,q,m,k;
    cin>>t;
    while(t--){
        cin>>q>>m;
        vector<int> vec(20001);
        vec[0]=1;
        while(q--){
            cin>>k;
            for(int i=m;i>=0;i--){
                if(vec[i])vec[i+k]=1;
            }
        }
        if(vec[m])cout<<"Yes\n";
        else cout<<"No\n";
    }
	return 0;
}
