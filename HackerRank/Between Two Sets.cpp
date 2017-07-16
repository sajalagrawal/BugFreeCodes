//https://www.hackerrank.com/challenges/between-two-sets
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
int gcd(int a,int b){
    int c;
    while(b>0){
        c=a;
        a=b;
        b=c%b;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main() {
    int m,n,i;
    cin>>m>>n;
    int a[m],b[n];
    int lcmm=1,gcdd=0;
    for(i=0;i<m;i++){
        cin>>a[i];
        lcmm=lcm(a[i],lcmm);
    }
    for(i=0;i<n;i++){
        cin>>b[i];
        gcdd=gcd(b[i],gcdd);
    }
    int count=0;
    for(i=lcmm;i<=gcdd;i=i+lcmm){
        if(gcdd%i==0)count++;
    }
    cout<<count<<"\n";
	return 0;
}
