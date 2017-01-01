//http://www.practice.geeksforgeeks.org/problem-page.php?pid=609
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
	    int flag=1;
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n-1;i++){
	        if(a[i]>a[i+1]){
	            flag=0;
	            break;
	        }
	    }
	    cout<<flag<<"\n";
	}
	return 0;
}
