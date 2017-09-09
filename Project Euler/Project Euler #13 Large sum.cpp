//https://www.hackerrank.com/contests/projecteuler/challenges/euler013/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,carry=0,sum=0,i,j;
    cin>>n;
    string a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    string res="";
    for(i=49;i>=0;i--){
        sum=carry;
        for(j=0;j<n;j++){
            sum+=a[j][i]-'0';
        }
        carry=sum/10;
        res.insert(0,to_string(sum%10));
    }
    while(carry){
        res.insert(0,to_string(carry%10));
        carry/=10;
    }
    for(i=0;i<10;i++)cout<<res[i];
    cout<<endl;
	return 0;
}
