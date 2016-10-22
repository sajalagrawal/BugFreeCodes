//http://www.practice.geeksforgeeks.org/problem-page.php?pid=535
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,temp,k,i;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    temp=a[k-1];
	    a[k-1]=a[n-k];
	    a[n-k]=temp;
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
