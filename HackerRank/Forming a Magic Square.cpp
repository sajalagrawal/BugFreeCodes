//https://www.hackerrank.com/challenges/magic-square-forming/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int p[8][3][3]={
        {{4,9,2},{3,5,7},{8,1,6}},
        {{2,9,4},{7,5,3},{6,1,8}},
        {{2,7,6},{9,5,1},{4,3,8}},
        {{6,7,2},{1,5,9},{8,3,4}},
        {{6,1,8},{7,5,3},{2,9,4}},
        {{8,1,6},{3,5,7},{4,9,2}},
        {{8,3,4},{1,5,9},{6,7,2}},
        {{4,3,8},{9,5,1},{2,7,6}}
    };
    int a[3][3],i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)cin>>a[i][j];
    }
    int minn=INT_MAX,ans=0;
    for(i=0;i<8;i++){
        ans=0;
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                ans+=abs(p[i][j][k]-a[j][k]);
            }
        }
        minn=min(minn,ans);
    }
    cout<<minn<<"\n";
	return 0;
}
