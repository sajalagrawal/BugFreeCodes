//https://www.codechef.com/OCT17/problems/CHEFCOUN
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
//https://www.youtube.com/watch?v=yGEVBReWfiQ&feature=youtu.be
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
 
int main() {
    
    ll t,n,x,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n-1;i++){
            x=4294967296-i*100000-n+1+i;
            x=x/2;
            if(x>1 and x<=100000 and ceil(x)==x){
                break;
            }
        }
        for(j=0;j<i;j++)cout<<"100000 ";
        cout<<x<<" ";
        for(j=i+1;j<n;j++)cout<<"1 ";
        cout<<"\n";
    }
	return 0;
}