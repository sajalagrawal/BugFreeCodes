//https://www.hackerrank.com/contests/code-blitz-002/challenges/liams-array

#include <cmath> 
#include <cstdio>
#include <vector>
#include<limits.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        long long int mult=LONG_MIN;
        for(int i=0;i<=k;i++){
            if(a[i]*a[n-1-k+i]>mult)mult=a[i]*a[n-1-k+i];
        }
        cout<<mult<<"\n";
    }                           
    return 0;   
}
