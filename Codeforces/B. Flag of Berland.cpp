//http://codeforces.com/contest/837/problem/B
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,m,r=0,g=0,b=0,i,j;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)cin>>a[i][j];
    }
    //row wise
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][0]=='R'){
                if(r!=0 and a[i][0]!=a[i-1][0]){
                    cout<<"NO\n";
                    //cout<<"i="<<i<<"j="<<j<<endl;
                    //cout<<"r="<<r<<endl;
                    return 0;
                }
            }
            if(a[i][0]=='G'){
                if(g!=0 and a[i][0]!=a[i-1][0]){
                    cout<<"NO\n";
                    return 0;
                }
            }
            if(a[i][0]=='B'){
                if(b!=0 and a[i][0]!=a[i-1][0]){
                    cout<<"NO\n";
                    return 0;
                }
            }
            if(a[i][j]!=a[i][0]){
                goto colwise;
            }
        }
        if(a[i][0]=='R')r++;
        if(a[i][0]=='G')g++;
        if(a[i][0]=='B')b++;
    }
    if(r==b and b==g){
        cout<<"YES\n";
        return 0;
    }
    //col wise
    colwise:;
    r=g=b=0;
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            if(a[0][j]=='R'){
                if(r!=0 and a[0][j]!=a[0][j-1]){
                    cout<<"NO\n";
                    return 0;
                }
            }
            if(a[0][j]=='G'){
                if(g!=0 and a[0][j]!=a[0][j-1]){
                    cout<<"NO\n";
                    return 0;
                }
            }
            if(a[0][j]=='B'){
                if(b!=0 and a[0][j]!=a[0][j-1]){
                    cout<<"NO\n";
                    return 0;
                }
            }
            if(a[i][j]!=a[0][j]){
                cout<<"NO\n";
                return 0;
            }
        }
        if(a[0][j]=='R')r++;
        if(a[0][j]=='G')g++;
        if(a[0][j]=='B')b++;
    }
    if(r==b and b==g){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
	return 0;
}

/*
3 6
RGBRGB
RGBRGB
RGBRGB
6 4
RRRR
BBBB
GGGG
RRRR
BBBB
GGGG

*/
