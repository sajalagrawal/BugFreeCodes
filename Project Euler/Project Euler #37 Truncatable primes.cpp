//https://www.hackerrank.com/contests/projecteuler/challenges/euler037
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
//circular prime and not permutable prime
/*bool prime[1000005];
void sieve(){
    int i,j;
    memset(prime,true,sizeof prime);
    for(i=2;i*i<=1000005;i++){
        if(prime[i]==true){
            for(j=i*2;j<=1000005;j=j+i){
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
bool checkHash(int n){
    //first and last digit should not be 1,4,6,8,9,0
    string num=to_string(n);
    int first=num[0]-'0';
    int last=num[num.size()-1]-'0';
    if(first==1 or first==4 or first==6 or first==8 or first==9 or first==0)return false;
    if(last==1 or last==4 or last==6 or last==8 or last==9 or last==0)return false;
    return true;
}

bool checkTruncation(int n){
    int i;
    string num=to_string(n);
    string num2=to_string(n);
    for(i=0;i<num.size();i++){
        num.erase(0,1);
        int val=stoi(num);
        if(isPrime(val)==false)return false;
    }
    for(i=0;i<num2.size();i++){
        num2.erase(num2.size()-1,1);
        int val=stoi(num2);
        if(isPrime(val)==false)return false;
    }
    
    return true;
}

int main() {
   // sieve();
    int n,i;
    ll ans=0;
    cin>>n;
    for(i=11;i<n;i++){
        if(isPrime(i)){
            //cout<<"prime i="<<i<<endl;
            if(checkHash(i)){  
                //first and last digit should not be 1,4,6,8,9,0
                //cout<<"hashed i="<<i<<endl;
                if(checkTruncation(i)){
                    ans+=i;
                    //cout<<"i="<<i<<endl;
                }
            }
        }
    }
    cout<<ans<<"\n";
	return 0;
}
