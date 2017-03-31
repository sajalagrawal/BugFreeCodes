//https://www.codechef.com/problems/MINION
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
pair<ll,ll> a[100005];

int main() {
	// your code goes here
	int n,x,y,d,ans=0,i,prevS,prevF;
	cin>>n;
	for(i=0;i<n;i++){
	    cin>>x>>y>>d;
	    a[i].first=x;
	    a[i].second=x+d;
	}
	sort(a,a+n);
	prevF=a[0].first;
	prevS=a[0].second;
	ans=a[0].second-a[0].first+1;
	for(i=1;i<n;i++){
	    if(a[i].first>=prevS){
	        ans+=a[i].second-a[i].first+1;
	        prevF=a[i].first;
	        prevS=a[i].second;
	    }else if(a[i].first<prevS and a[i].second>prevS){
	        ans+=a[i].second-prevS;
	        prevS=a[i].second;
	    }else if(a[i].first>=prevF and a[i].first<=prevS and a[i].second<=prevS){
	        //do nothing   
	    }
	}
	cout<<ans<<"\n";
	return 0;
}
