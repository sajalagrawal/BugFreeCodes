//https://www.hackerrank.com/contests/projecteuler/challenges/euler036/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
bool isPalindrome(string str){
    int i=0,j=str.size()-1;
    for(;i<=j;i++,j--){
        if(str[i]!=str[j])return false;
    }
    return true;
}

string convert(int n,int k){
    string res="";
    int rem;
    while(n){
        rem=n%k;
        n=n/k;
        res+=rem+'0';
    }
    return res;
}
int main() {
    int n,k,i;
    ll ans=0;
    cin>>n>>k;
    for(i=1;i<n;i++){
        string str=to_string(i);
        if(isPalindrome(str)){
            //cout<<"i="<<i<<endl;
            string base=convert(i,k);
            if(isPalindrome(base)){
                //cout<<"i="<<i<<" base="<<base<<endl;
                ans+=i;
            }
        }
    }
    cout<<ans<<"\n";
	return 0;
}
