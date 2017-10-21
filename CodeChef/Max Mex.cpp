//https://www.codechef.com/OCT17/problems/MEX
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,n,k,i,p;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[200005]={0};
        for(i=0;i<n;i++){
            cin>>p;
            a[p]=1;
        }
        /*for(i=0;i<10;i++)cout<<a[i]<<" ";
        cout<<endl;*/
        for(i=0;i<200005;i++){
            if(a[i]==0 and k){
                a[i]=1; k--;
            }
            if(k==0)break;
        }
        for(i=0;i<200005;i++){
            if(a[i]==0){
                cout<<i<<"\n";
                break;
            }
        }
    
    }
	return 0;
}
