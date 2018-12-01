//https://www.codechef.com/DEC17/problems/VK18
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
ll res[2000005];
ll ans[1000002];
int main() {
    ll t,n,i,lastdigit,counter,j;
    for(i=1;i<=9;i++){
        if(i%2==0)res[i]=i;
        else res[i]=-i;
    }
    for(i=10;i<2000005;i++){
        lastdigit=i%10;
        if(lastdigit%2==0){  //even +
            res[i]=res[i/10]+lastdigit;
        }else{ //odd -
            res[i]=res[i/10]-lastdigit;
        }
    }
    //for(i=0;i<20;i++)cout<<"i="<<i<<"res="<<res[i]<<endl
    ans[0]=0;
    ans[1]=2;
    ans[2]=12;
    for(i=3;i<=1000001;i++){
        //cout<<"i="<<i<<endl;
        ans[i]=2*ans[i-1]-ans[i-2]-abs(res[i])*2+abs(res[2*i-2])*1+abs(res[2*i-1])*2+abs(res[2*i])*1;
        //cout<<"i="<<i<<" ans="<<ans[i]<<endl;
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ans[n]<<"\n";
    }
	return 0;
}
