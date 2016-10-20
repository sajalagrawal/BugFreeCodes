//http://www.practice.geeksforgeeks.org/problem-page.php?pid=765
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;
int max(int a,int b){
    return ((a>b)?a:b);
}
int main() {
	int t,n,i,j,k,m1,m2,m3;
    long int mul;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    //m1=m2=m3=a[0];
	    sort(a,a+n);
	    m1=a[0]*a[1]*a[n-1];
	    m2=a[n-1]*a[n-2]*a[n-3];
	    mul=max(m1,m2);
	    cout<<mul<<"\n";
	}
	return 0;
}
