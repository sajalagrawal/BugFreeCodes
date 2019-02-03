//https://practice.geeksforgeeks.org/problems/maximize-number-of-1s/0/?ref=self
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	//code
	int i,t,n,m;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){cin>>a[i];    }
	    cin>>m;
	    int wl=0,wr=0,bestl=0,bestr=0,window=0,zero=0;
	    while(wr<n){
	        if(zero<=m){
	            if(a[wr]==0)zero++;
	            wr++;
	        }
	        //cout<<"wr="<<wr<<" ";
	        //cout<<"zero="<<zero<<" ";
	        if(zero>m){
	            while(zero>m){
	                if(a[wl]==0)zero--;
	                wl++;
	            }
	        }
	        //cout<<"wl="<<wl<<endl;
	        if(wr-wl>window){
	            window=wr-wl;
	            bestr=wr;
	            bestl=wl;
	        }
	        
	    }
	    int j=0;
	    /*for(j=bestl;j<bestr;j++){
	            if(a[j]==0)cout<<j<<" ";
	    }*/
	    cout<<window<<endl;
	}
	return 0;
}