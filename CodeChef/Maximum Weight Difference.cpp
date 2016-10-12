//https://www.codechef.com/problems/MAXDIFF
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
    int t,csum,psum,n,k,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k>n/2) k=n-k;
        csum=psum=0;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(i=0;i<=k-1;i++)csum+=a[i];
        for(;i<n;i++) psum+=a[i];
        cout<<(psum-csum)<<"\n";
    }
	return 0;
}
