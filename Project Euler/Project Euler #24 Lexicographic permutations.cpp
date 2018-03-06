//https://www.hackerrank.com/contests/projecteuler/challenges/euler024
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
//n=13!=6227020800
int main() {
    ll t,n,i,j,k;
    cin>>t;
    while(t--){
        cin>>n;
        //bool used[13]={false};
        string str="abcdefghijklm";
        ll total=6227020800; 
        ll size=13;
        for(i=1;i<=13;i++){
           // cout<<"n="<<n<<endl;
            //cout<<"str="<<str<<endl;
            //cout<<"i="<<i<<endl;
            for(j=1;j<=size;j++){
                ll start=(j-1)*total/size+1;
                ll end=j*total/size;
                if(n>=start and n<=end){
                   //out<<"j="<<j<<endl;
                    cout<<str[j-1];
                    str.erase(j-1,1);
                    n=n-(j-1)*total/size;
                    break;
                }
            }
            total=total/size;
            size--;
            
        }
        cout<<"\n";
    }
	return 0;
}
