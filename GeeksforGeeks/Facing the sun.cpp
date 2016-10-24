//http://www.practice.geeksforgeeks.org/problem-page.php?pid=515
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<limits.h>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],ans=0,maxH=INT_MIN;
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++){
	        if(a[i]>maxH){
	            ans++;
	            maxH=a[i];
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
