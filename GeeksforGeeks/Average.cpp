//http://www.practice.geeksforgeeks.org/problem-page.php?pid=582
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    int sum=0,avg;
	    for(i=0;i<n;i++){
	        sum+=a[i];
	        avg=sum/(i+1);
	        cout<<avg<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
