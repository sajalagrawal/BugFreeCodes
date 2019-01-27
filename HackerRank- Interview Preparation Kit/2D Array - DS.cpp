//https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
int a[6][6];
ll solve(int i,int j){
    ll sum=0,r,c;
    for(r=i;r<i+3;r++){
        for(c=j;c<j+3;c++){
            sum+=a[r][c];
        }
    }
    //cout << "i=" << i << " j=" << j << " sum=" << sum << endl;
    sum=sum-a[i+1][j]-a[i+1][j+2];
    //cout<<"i="<<i<<" j="<<j<<" sum="<<sum<<endl;
    return sum;
}
int main() {
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            cin>>a[i][j];
        }
    }
    ll ans=LLONG_MIN;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            ans=max(ans,solve(i,j));
        }
    }
    cout<<ans<<endl;
    return 0;
}
