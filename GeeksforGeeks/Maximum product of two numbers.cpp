//http://www.practice.geeksforgeeks.org/problem-page.php?pid=453
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
	    int a[n],m1,m2;
	    m1=m2=INT_MIN;
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++){
	        if(a[i]>m1){
	            m2=m1;
	            m1=a[i];
	        }
	        else if(a[i]>m2)m2=a[i];
	    }
	    cout<<(m1*m2)<<"\n";
	}
	return 0;
}
