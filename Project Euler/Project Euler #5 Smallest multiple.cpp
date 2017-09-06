//https://www.hackerrank.com/contests/projecteuler/challenges/euler005
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

//1st approach

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
    return (a*b)/(gcd(a,b));
}

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=1;
        for(int i=1;i<=n;i++){
            ans=lcm(i,ans);
        }
        cout<<ans<<"\n";
    }
	return 0;
}

//2nd approach

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
bool prime[50];
void sieve(){
    int i,j;
    memset(prime,true,sizeof prime);
    prime[0]=prime[1]=false;
    for(i=2;i<=50;i++){
        if(prime[i]){
            for(j=i*2;j<=50;j=j+i){
                prime[j]=false;
            }
        }
    }
}
int main() {
    sieve();
    //for(int i=0;i<=50;i++)cout<<prime[i];
    int t,n,i,j;
    cin>>t;
    while(t--){
        ll ans=1;
        cin>>n;
        for(i=2;i<=n;i++){
            if(prime[i]){
                j=0;
                while(1){
                    if(pow(i,j)<=n and pow(i,j+1)>n){
                        ans=ans*pow(i,j);
                        break;
                    }
                    j++;
                }
            }
        }
        cout<<ans<<"\n";
    }
	return 0;
}
