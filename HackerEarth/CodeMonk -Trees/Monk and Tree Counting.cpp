//https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/practice-problems/algorithm/tree-counting-3/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main()
{
    long long n,k2,i,j,k,ans=0;
    long long arr[501],par[501];
    long long anc[501][501]={0};
    cin>>n>>k2;
    for(i=1;i<=n;i++)cin>>arr[i];
    for(i=2;i<=n;i++)cin>>par[i];

    for(i=2;i<=n;i++){
    	int x=i;
    	while(x!=1){
    		x=par[x];
    		anc[x][i]=1;
    	}
    }
    /*for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<anc[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++){
    		for(k=1;k<=n;k++){
    		    if(j==k)continue;
    			if(anc[i][j] && anc[i][k] && arr[i]+arr[j]+arr[k]>=k2){
                    //cout<<"i="<<i<<" j="<<j<<" k="<<k<<"\n";
                    ans++;
    			}
    		}
    	}
    }
    cout<<ans/2;
    return 0;
}
