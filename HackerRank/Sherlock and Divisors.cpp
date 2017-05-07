//https://www.hackerrank.com/challenges/sherlock-and-divisors
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,ans,i;
    cin>>t;
    while(t--){
        cin>>n;
        ans=0;
        for(i=1;i*i<=n;i++){
            if(i*i==n and n%i==0 and i%2==0)ans++;
            else if(n%i==0){
                if(i%2==0)ans++;
                if((n/i)%2==0)ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
