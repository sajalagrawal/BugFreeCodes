//https://www.hackerrank.com/challenges/grid-challenge
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)cin>>a[i][j];
        }
        int flag=0;
        for(int i=0;i<n;i++)sort(a[i],a[i]+n);
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]>a[i+1][j]){
                    flag=1;
                    break;
                }
            }
        }
       	//cout<<"flag="<<flag<<"\n";
        if(flag==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
