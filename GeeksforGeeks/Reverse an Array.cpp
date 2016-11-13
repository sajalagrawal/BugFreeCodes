//http://www.practice.geeksforgeeks.org/problem-page.php?pid=78
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,j,temp;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0,j=n-1;i<j;i++,j--){
	        temp=a[i];
	        a[i]=a[j];
	        a[j]=temp;
	    }
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
