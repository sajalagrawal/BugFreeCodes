//http://practice.geeksforgeeks.org/problems/ncr/0
//Author- SAJAL AGRAWAL 
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = 1000000007, comb[1001][1001];

int main(){
	  // Computing Binomial coefficients
	  for (int i = 0; i <= 1000; i++){
			comb[i][0] = comb[i][i] = 1;
			for (int j = 1; j < i; j++){
				  comb[i][j] = ((comb[i-1][j]%MOD) + (comb[i-1][j-1]%MOD))%MOD;
			}
	  }
	  int t;
	  cin>>t;
	  while (t--){
			int n,r;
			cin>>n>>r;
			cout<<comb[n][r]%MOD<<"\n";
			
	  }
	  return 0;
}
