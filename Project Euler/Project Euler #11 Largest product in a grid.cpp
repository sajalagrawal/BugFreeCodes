//https://www.hackerrank.com/contests/projecteuler/challenges/euler011
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

//http://www.mathblog.dk/greatest-product-in-20x20-grid/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int a[20][20],i,j;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++)cin>>a[i][j];
    }
    ll maxx=0,mult1=1,mult2=1;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            if(j<=16){   //move right
                mult1=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
                maxx=max(maxx,mult1);
            }
            
            if(i<=16){   //move down
                mult1=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
                maxx=max(maxx,mult1);
            }
            if(i+3<=19 and j+3<=19){    //move right lower diagonal
                mult1=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
                maxx=max(maxx,mult1);
            }
            if(i-3>=0 and j+3<=19){   //move right upper diagonal
                mult1=a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3];
                maxx=max(maxx,mult1);
            }
        }
    }
    cout<<maxx<<"\n";
	return 0;
}   