//https://www.codechef.com/DEC17/problems/GIT01
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    ll t,m,n,i,j,ans1=0,ans2=0;
    cin>>t;
    while(t--){
        ans1=ans2=0;
        cin>>n>>m;
        char a[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        /*for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }cout<<endl;
        }*/
        //cost for a[0][0] as red
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if((i+j)%2==0 and a[i][j]=='G'){
                    //cout<<"i="<<i<<"j="<<j<<endl;
                    ans1+=3;
                }
                if((i+j)%2==1 and a[i][j]=='R'){
                    //cout<<"i="<<i<<"j="<<j<<endl;
                    ans1+=5;
                }
            }
        }
        //cost for a[0][0] as green
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if((i+j)%2==0 and a[i][j]=='R')ans2+=5;
                if((i+j)%2==1 and a[i][j]=='G')ans2+=3;
            }
        }
        cout<<min(ans1,ans2)<<"\n";
    }
	return 0;
}
