//http://www.practice.geeksforgeeks.org/problem-page.php?pid=538
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<limits.h>
using namespace std;

int main() {
	int t,n,m1,m2,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    m1=m2=INT_MIN;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++){
	        if(a[i]>m1){
	            m2=m1;
	            m1=a[i];
	        }
	        if(a[i]>m2 && a[i]<m1)m2=a[i];
	    }
	    cout<<m2<<"\n";
	}
	return 0;
}
