//https://www.codechef.com/LTIME56/problems/L56GAME
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
 
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int i;
        int ocount=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1)ocount++;
        }
        if(ocount%2==0)cout<<"1\n";
        else cout<<"2\n";
    
    }
	return 0;
}
 