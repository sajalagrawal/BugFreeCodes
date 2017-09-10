//https://www.hackerrank.com/contests/projecteuler/challenges/euler015
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
ll comb[1001][1001];
int main() {
    int i,j;
    for(i=0;i<=1000;i++){
        comb[i][0]=comb[i][i]=1;
        for(j=1;j<i;j++){
            comb[i][j]=(comb[i-1][j]%MOD+comb[i-1][j-1]%MOD)%MOD;
        }
    }
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<comb[n+m][n]<<"\n";
    }
	return 0;
}
