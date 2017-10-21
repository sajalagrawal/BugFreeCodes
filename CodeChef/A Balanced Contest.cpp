//https://www.codechef.com/OCT17/problems/PERFCONT
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,p,i;
    cin>>t;
    while(t--){
        cin>>n>>p;
        int a[n],cake=0,hard=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=p/2)cake++;
            if(a[i]<=p/10)hard++;
        }
        if(cake==1 and hard==2)cout<<"yes\n";
        else cout<<"no\n";
        
    }
	return 0;
}
