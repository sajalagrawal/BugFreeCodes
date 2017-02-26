//http://www.practice.geeksforgeeks.org/problem-page.php?pid=281
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],left[n],right[n],sum=0;
	    for(int i=0;i<n;i++)cin>>a[i];
	    left[0]=a[0];
	    for(int i=1;i<n;i++)left[i]=max(left[i-1],a[i]);
	    
	    right[n-1]=a[n-1];
	    for(int i=n-2;i>=0;i--)right[i]=max(right[i+1],a[i]);
	    for(int i=0;i<n;i++)
	        sum+=min(left[i],right[i])-a[i];
	   cout<<sum<<"\n";
	}
	return 0;
  }
