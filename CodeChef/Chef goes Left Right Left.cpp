//https://www.codechef.com/problems/CLRL
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,i,l,r,rez;
    cin>>t;
    while(t--){
        l=0;    r=1e9+10;
        cin>>n>>rez;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++){
            if(a[i]>r or a[i]<l){
                cout<<"NO\n";
                goto end;
            }
            if(a[i]>rez)r=a[i];
            if(a[i]<rez)l=a[i];
        }
        cout<<"YES\n";
        end:;
    }
	return 0;
}
