//http://codeforces.com/contest/903/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,i=0,k=0,rem;
    cin>>n;
    while(n--){
        cin>>k;
        for(i=0;i<=34;i++){
            rem=k-i*3;
            if(rem<0)break;
            if(rem%7==0){
                //cout<<"i="<<i;
                cout<<"YES\n";
                goto end;
            }
        }
        cout<<"NO\n";
        end:;
    }
	return 0;
}
