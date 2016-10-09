//https://www.codechef.com/problems/LEPERMUT
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,i,inv,linv,j;
	cin>>t;
	while(t--){
	    cin>>n;
	    inv=linv=0;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    for(j=0;j<n;j++){
	        for(i=0;i<j;i++){
	            if(a[i]>a[j]) inv++;
	        }
	    }
	    for(i=0;i<n-1;i++){
	        if(a[i]>a[i+1])linv++;
	    }
	    if(inv==linv)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
