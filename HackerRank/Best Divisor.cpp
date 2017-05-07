//https://www.hackerrank.com/challenges/best-divisor
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll digitSum(ll n){
    ll sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {
    ll n,max=0,i,best;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            if(digitSum(i)>max){
                max=digitSum(i);
                best=i;
            }
        }
    }
    cout<<best<<endl;
    return 0;
}
