//https://www.codechef.com/MARCH17/problems/EXTRAN/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	long long t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    long long a[n];
	    map<ll,ll> dict;
	    map<ll,ll>::iterator it;
	    for(i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
	    if(a[1]-a[0]!=1)cout<<a[0]<<"\n";
	    else if(a[n-1]-a[n-2]!=1)cout<<a[n-1]<<"\n";
	    else
	    for(i=0;i<n;i++){
	        dict[a[i]]++;
	    }
	    for(it=dict.begin();it!=dict.end();it++){
	        if((*it).second>1){
	            cout<<(*it).first<<"\n";
	        }else if((*it).second==0){
	            it--;
	            cout<<(*it).first<<"\n";
	        }
	    }
	}
	return 0;
}
 
