//http://www.practice.geeksforgeeks.org/problem-page.php?pid=354
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
	    int l=0,r=n-1,minSum=INT_MAX,index1,index2;
	    while(l<r){
	        if(abs(a[l]+a[r])<abs(minSum)){
	            minSum=abs(a[l]+a[r]);
	            index1=l;
	            index2=r;
	        }
	        if((a[l]+a[r])<0)l++;
	        else r--;
	    }
	    cout<<a[index1]<<" "<<a[index2]<<"\n";
	}
	return 0;
}
