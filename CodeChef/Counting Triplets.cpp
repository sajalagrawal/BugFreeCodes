//https://www.codechef.com/problems/CRES103
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],ans=0,l,r;
	    for(i=0;i<n;i++)cin>>a[i];
	    cin>>k;
	    sort(a,a+n);
	    for(i=0;i<n-2;i++){
	        l=i+1;
	        r=n-1;
	        while(l<r){
	            if(a[i]+a[l]+a[r]<k){
	                ans+=r-l;
	                l++;
	            }else r--;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
