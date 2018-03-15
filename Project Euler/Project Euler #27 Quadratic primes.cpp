//https://www.hackerrank.com/contests/projecteuler/challenges/euler027/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
/*bool prime[1000005];

void sieve(){
    memset(prime,true,sizeof prime);
    int i,j;
    prime[0]=prime[1]=false;
    for(i=2;i*i<=1000000;i++){
        if(prime[i]==true){
            for(j=i*2;j<=1000000;j=j+i){
                prime[j]=false;
            }
        }
    }
}*/
bool isPrime(ll n){
    if(n==2)return true;
    if(n==1 || n%2==0)return false;
   
    ll i=3;
    while(i*i<=n){
        if(n%i==0)return false;
        i=i+2;
    }
    return true;
}

int main() {
    //sieve();
    ll n,a,b,count,maxx=LLONG_MIN,aa=-1,bb=-1,i,res;
    cin>>n;
    for(a=-n;a<=n;a++){
        for(b=-n;b<=n;b++){
            count=0;
            for(i=0;;i++){
                res=i*i+a*i+b;
                if(res<0)break;  //imp
                if(isPrime(res)==true){
                    count++;
                }else break;
            }
            //if(a==-1)
            if(count>maxx){
                //cout<<"a="<<a<<" b="<<b<<" count="<<count<<endl;
                aa=a;
                bb=b;
                maxx=count;
            }
        }
    }
    cout<<aa<<" "<<bb<<"\n";
	return 0;
}
