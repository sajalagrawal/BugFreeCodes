//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/closest-gift/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n==2)return true;
    if(n==1|| n%2==0)return false;
    int i=3;
    while(i*i<=n){
        if(n%i==0)return false;
        i=i+2;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int left=n-1,right=n+1,ans;
    if(isPrime(n))ans=0;
    else{
        while(true){
            if(left>0 && isPrime(left)){
                ans=n-left;
                break;
            }
            left--;
            if(isPrime(right)){
                ans=right-n;
                break;
            }
            right++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
