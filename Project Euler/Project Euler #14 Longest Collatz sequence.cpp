//https://www.hackerrank.com/contests/projecteuler/challenges/euler014
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
int mp[5649500]={0,},maxx[5649500]={0,};
//5649499

void solve(){
    ll count=0,temp=0,i;
    mp[0]=-1;
    mp[1]=1;
    mp[2]=2;
    mp[3]=8;
    for(i=4;i<=5000010;i++){
        temp=i;
        count=0;
        while(temp!=1){
            if(temp<=5000010 and mp[temp])break;
            if(temp&1)temp=3*temp+1;
            else temp>>=1;
            count++;
        }
        mp[i]=count+mp[temp];
        maxx[i]=mp[maxx[i-1]]>mp[i]?maxx[i-1]:i;
    }
    
}

int main() {
    int t,n,i;
    solve();
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        cout<<maxx[n]<<"\n";
    }
	return 0;
}
