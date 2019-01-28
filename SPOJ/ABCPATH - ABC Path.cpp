//https://www.spoj.com/problems/ABCPATH/
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back
char a[55][55];
ll dp[55][55];
int xx[8]={-1,0,1,-1,1,-1,0,1};
int yy[8]={-1,-1,-1,0,0,1,1,1};

ll moveAround(int i,int j, char prev,int row,int col){
    // [i][j] -> indices of the current positions
    //prev -> from where we are coming to [i][j]
    ll x,y;
    /*for(x=0;x<row;x++){
        for(y=0;y<col;y++)cout<<a[x][y];
        cout<<endl;
    }*/
    if(i<0 or i>=row or j<0 or j>=col){
        return 0;
    }
    //cout<<"At: i="<<i<<" j="<<j<<endl;
    if(a[i][j]-prev!=1){
        //cout<<"a[][]="<<a[i][j]<<" prev="<<prev<<endl;
        return 0;
    }
    //cout<<"At: i="<<i<<" j="<<j<<endl;
    if(dp[i][j]!=-1)return dp[i][j];
    ll ans=0,k;
    //move in all 8 possible directions from here
    for(k=0;k<8;k++){
        ans=max(ans, 1+moveAround(i+xx[k],j+yy[k],a[i][j],row,col)  );   
    }
    dp[i][j]=ans;
    return ans;
    
}
int main() {
    ll tt=1;
	while(1){
	    ll n,m,i,j,ans=0,k;
	    for(i=0;i<55;i++){
	        for(j=0;j<55;j++){
	            a[i][j]='-';
	            dp[i][j]=-1;
	        }
	    }
	    cin>>n>>m;  //n x m matrix
	    if(n==0 and m==0)break;

	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cin>>a[i][j];
	            //cout<<a[i][j]<<" ";
	        }
	        //cout<<endl;
	    }
	    /*for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }*/
	    char target;
	    //cin>>target;
	    target='A';
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            if(a[i][j]==target){
	                //move in all 8 possible directions from here
	                for(k=0;k<8;k++){
	                    //cout<<"k="<<k<<endl;
	                    ans=max(ans, 1+moveAround(i+xx[k],j+yy[k],a[i][j],n,m)  );   
	                }
	            }
	        }
	    }
	    cout<<"Case "<<tt<<": "<<ans<<"\n";
	    tt++;
	}
	return 0;
}
