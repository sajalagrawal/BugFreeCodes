//https://www.hackerrank.com/challenges/count-triplets-1/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=dictionaries-hashmaps
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll max(ll a,ll b){
    return a>b?a:b;
}
int main(){
    ll n,r,i,maxele=0;
    cin>>n>>r;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        maxele=max(maxele,a[i]);
    }
    map<ll,ll> leftFreq;
    map<ll,ll> rightFreq;
    ll ans=0;
    //cout<<maxele<<endl;
    for(i=0;i<n;i++)rightFreq[a[i]]++;
    rightFreq[a[0]]--;
    for(i=1;i<n;i++){
        ll cur=a[i];
        leftFreq[a[i-1]]++;
        rightFreq[cur]--;
        if(cur>=r and cur%r==0 and leftFreq[cur/r]  and cur*r<=maxele and rightFreq[cur*r]){
            //cur%r==0 is imp:
            //eg: 1 3 4 6 with r=2
            // 3/2==1(integer division), also 3*2=6 is also present in map
            //cout<<leftFreq[cur/r]<<" i="<<i<<" "<<rightFreq[cur*r]<<endl;
            ans+=leftFreq[cur/r]*rightFreq[cur*r];
        }
    }
    cout<<ans<<"\n";
    return 0;
}

/*
r=2
1 2 1 2 4
ans=3

4 2
1 3 4 6
ans=0

6 2
2 3 4 5 6 10
ans=0

4 1
1 2 2 4
ans=0
*/