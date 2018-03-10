//https://www.hackerrank.com/contests/projecteuler/challenges/euler026
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

unsigned ll power(ll x, ll y,ll n){
    unsigned ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2,n)%n;   //important to take modulo as results will be large and we care only for remainder of power function
    if (y%2 == 0)
        return (temp*temp)%n;
    else
        return (x*temp*temp)%n;
}
//terminating fraction always have denominator multiple of 2 and 5
bool isTerminating(ll n){
    while(n%2==0)n=n/2;
    while(n%5==0)n=n/5;
    if(n==1)return true;
    return false;
}

//https://medium.com/@aiswaryamathur/length-of-recurring-cycle-repetend-in-decimal-representation-of-a-unit-fraction-1afe6461cc59
int main() {
    //for non-terminating cycle length<=d;
    ll len[10005];//store cycle length for each denominator
    ll i,p,d,k,n;
    len[0]=-1;
    len[1]=1;
    for(i=2;i<10003;i++){
        if(isTerminating(i)){
            //cycle length for Terminating decimal is zero  eg:1/4=0.25
            len[i]=0;
        }else{
            n=i;
            while(n%2==0)n=n/2;
            while(n%5==0)n=n/5;
            //Completely Repeating decimal eg:1/3=0.3333...
            //Repeating after a non-repeating part  eg:1/6=0.16666....  non-repeating part comes from 2 and 5 in denominator
            for(k=1;k<=n;k++){
                if((power(10,k,n))%n==1){  //if (10^k-1)/n is an integer
                    len[i]=k;
                    //cout<<"i="<<i<<" :"<<len[i]<<endl;
                    goto end;
                }
            }
            /*for(p=2;p<=i;p++){
                for(k=1;k<p;k++){
                    d=p-k;
                    if((int)(pow(10,d+k)-pow(10,d))%i==0){  //if (10^(d+k)-10^d)/n
                        len[i]=k;
                        //cout<<"i="<<i<<" :"<<len[i]<<endl;
                        goto end;
                    }
                }
            }*/
        }
        end:;
    }
    ll ans[10005];
    ll maxLen=0,indx=2;
    
    for(i=3;i<10003;i++){
        if(len[i]>maxLen){
            maxLen=len[i];
            indx=i;
        }
        ans[i+1]=indx;
    }
    //for(i=0;i<=20;i++)cout<<"i="<<i<<" :"<<ans[i]<<endl;
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ans[n]<<"\n";
    }
	return 0;
}
