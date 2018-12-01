//https://www.hackerrank.com/contests/projecteuler/challenges/euler032
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
bool isPan(int a,int b,int n){
    int hash[10]={0},i;  //0 to 9
    int temp=a*b,k;
    while(a){
        k=a%10;
        hash[k]++;
        a=a/10;
    }
    while(b){
        k=b%10;
        hash[k]++;
        b=b/10;
    }
    while(temp){
        k=temp%10;
        hash[k]++;
        temp=temp/10;
    }
    if(hash[0]!=0)return false;
    for(i=1;i<=n;i++){
        if(hash[i]!=1)return false;
    }
    for(i=n+1;i<=9;i++){
        if(hash[i]!=0)return false;
    }
    return true;
}
int main() {
    int n,i,j;
    cin>>n;
    set<int> ss;
    //1digit*4digit
	//1dig*5dig i.e. 1*23456=23456 has minimum value of 5digits, hence not possible for N=9 too.
    for(i=1;i<=9;i++){
        //cout<<"i="<<i<<endl;
        for(j=1;j<=9999;j++){
            if(isPan(i,j,n)){
                //cout<<i<<j<<(i*j)<<endl;
                ss.insert(i*j);
            }
        }
    }
    //2dig*3dig
    for(i=10;i<=99;i++){
        //cout<<"i="<<i<<endl;
        for(j=1;j<=999;j++){
            if(isPan(i,j,n)){
                //cout<<i<<j<<(i*j)<<endl;
                ss.insert(i*j);
            }
        }
    }
    //3dig*2dig
    for(i=100;i<=999;i++){
        //cout<<"i="<<i<<endl;
        for(j=1;j<=99;j++){
            if(isPan(i,j,n)){
                //cout<<i<<j<<(i*j)<<endl;
                ss.insert(i*j);
            }
        }
    }
    //4dig*1dig
    for(i=1000;i<=9999;i++){
        //cout<<"i="<<i<<endl;
        for(j=1;j<=9;j++){
            if(isPan(i,j,n)){
                //cout<<i<<j<<(i*j)<<endl;
                ss.insert(i*j);
            }
        }
    }
    ll ans=0;
    set<int>::iterator it;
    for(it=ss.begin();it!=ss.end();it++){
        ans+=(*it);
    }
    cout<<ans<<"\n";
	return 0;
}
