//https://www.hackerrank.com/contests/projecteuler/challenges/euler035/problem
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
    int hash[10]={0},k;
    while(n){
        k=n%10;
        hash[k]++;
        n=n/10;
    }
    if(hash[0]>0 or hash[2]>0 or hash[4]>0 or hash[5]>0 or hash[6]>0 or hash[8]>0)return false;
    return true;
}

bool checkRotate(int n){
    int i;
    string num=to_string(n);
    for(i=1;i<=num.size()-1;i++){
        //rotated string is saved in num itself
        rotate(num.begin(),num.begin()+1,num.end());
        //cout<<"rotated->"<<num<<endl;
        int rnum=stoi(num);
        if(isPrime(rnum)==false)return false;
    }
    return true;
}

int main() {
   // sieve();
    int n,i;
    ll ans=17;
    cin>>n;
    for(i=11;i<n;i++){
        if(isPrime(i)){
            //cout<<"prime i="<<i<<endl;
            if(checkHash(i)){  //any number containing 0,2,4,6,8,5 can't be circular prime
                //i contains only digits 1,3,7,9
                //cout<<"hashed i="<<i<<endl;
                if(checkRotate(i)){
                    //cout<<"i="<<i<<endl;
                    ans+=i;
                }
            }
        }
    }
    cout<<ans<<"\n";
	return 0;
}
