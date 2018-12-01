//https://www.hackerrank.com/contests/projecteuler/challenges/euler031
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
//https://www.youtube.com/watch?v=_fgjrs570YE&index=11&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
int valueJ(int i){
    switch(i){
        case 0:return 1;
        case 1:return 2;
        case 2:return 5;
        case 3:return 10;
        case 4:return 20;
        case 5:return 50;
        case 6:return 100;
        case 7:return 200;
    }
    
    return -1;
}
int main() {
    int ways[8][100005],i,j,n;
    //1p
    //2p
    //5p
    //10p
    //20p
    //50p
    //100p
    //200p
    for(i=0;i<=7;i++)ways[i][0]=1;
    for(i=0;i<100005;i++)ways[0][i]=1;
    for(i=1;i<=7;i++){
        for(j=1;j<100005;j++){
            if(j>=valueJ(i)){
                ways[i][j]=(ways[i-1][j]%MOD+ways[i][j-valueJ(i)]%MOD)%MOD;
            }else{
                ways[i][j]=(ways[i-1][j]%MOD);
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ways[7][n]<<"\n";
    }
	return 0;
}
