//http://www.practice.geeksforgeeks.org/problem-page.php?pid=522
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    int temp=a[n-1],rightMax=a[n-1];
	    a[n-1]=-1;
	    for(i=n-2;i>=0;i--){
	        temp=a[i];
	        a[i]=rightMax;
	        if(temp>rightMax)rightMax=temp;
	    }
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
