//https://www.hackerrank.com/contests/projecteuler/challenges/euler040
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
unsigned ll power(ll x, ll y){
    unsigned ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);   
    if (y%2 == 0)
        return (temp*temp);
    else
        return (x*temp*temp);
}

int digit(unsigned ll n){
    int numdigits=1;
    unsigned ll pos=9;
    while(n>pos){
        n=n-pos;
        numdigits++;
        pos=numdigits*9*power(10,numdigits-1);
    }
    //cout<<n<<endl;
    //cout<<numdigits<<endl;
    unsigned ll base=power(10,numdigits-1);
    unsigned ll actualNum=base+(n-1)/numdigits;
    //cout<<actualNum<<endl;
    unsigned ll index=(n-1)/numdigits;
    unsigned ll digitIndex=n-index*numdigits;
    //cout<<digitIndex<<endl;
    //cout<<index<<endl;
    string num=to_string(actualNum);
    //cout<<"num"<<num<<endl;
    return (num[digitIndex-1]-'0');
}

int main() {
    int t,i;
    cin>>t;
    while(t--){
        unsigned ll ans=1;
        unsigned ll n;
        for(i=0;i<7;i++){
            cin>>n;
            //cout<<digit(n)<<endl;
            ans*=digit(n);
        }
        cout<<ans<<"\n";
    }
    //for(i=101;i<=1000;i++)cout<<digit(i);
	return 0;
}
