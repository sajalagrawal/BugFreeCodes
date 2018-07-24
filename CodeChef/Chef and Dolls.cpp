//https://www.codechef.com/problems/MISSP
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,i,k;
    cin>>t;
    while(t--){
        cin>>n;
        int a[100005]={0};
        while(n--){
            cin>>k;
            a[k]++;
        }
        for(i=0;i<100005;i++){
            if(a[i]!=0 and a[i]%2==1){
                cout<<i<<endl;
                break;
            }
        }
    }
	return 0;
}
