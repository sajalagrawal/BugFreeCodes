//https://www.hackerrank.com/challenges/leonardo-and-prime
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(long long n){
    if(n==2)return true;
    if(n==1 || n%2==0)return false;
   
    unsigned long long i=3;
    while(i*i<=n){
        if(n%i==0)return false;
        i=i+2;
    }
    return true;
}

int main() {
    unsigned long long t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        unsigned long mult=1,ans=0;
        for(i=2;i<=n;i++){
            if(isPrime(i)){
            	//cout<<"i="<<i<<endl;
                mult=mult*i;
                //cout<<"mult="<<mult<<endl;
                if(mult>n)break;
                if(mult==n){
                	ans++;
                	break;
                }
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
