//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1325
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t,n,i,temp,j;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
	    int index=1;
	    for(i=0;i<n/2;i++){
	        temp=a[n-1];
	        for(j=n-2;j>=index;j--)
	            a[j+1]=a[j];
	        a[index]=temp;
	        index=index+2;
	    }
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
