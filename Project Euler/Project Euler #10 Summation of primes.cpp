//https://www.hackerrank.com/contests/projecteuler/challenges/euler010/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
bool prime[1000005];
ll sum[1000005];
void sieve(){
    int i,j;
    memset(prime,true,sizeof prime);
    //memset(sum,0,sizeof sum);
    prime[0]=prime[1]=false;
    sum[0]=sum[1]=0;
    for(i=2;i<=1000004;i++){
        sum[i]=sum[i-1];
        if(prime[i]){
            sum[i]+=i;
            for(j=i*2;j<=1000004;j=j+i){
                prime[j]=false;
            }
        }
    }
}
int main() {
    sieve();
    int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<sum[n]<<"\n";
    }
	return 0;
}
