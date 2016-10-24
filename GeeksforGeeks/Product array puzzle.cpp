//http://www.practice.geeksforgeeks.org/problem-page.php?pid=571
//Author- Sajal Agrawal
//Username:sajalagrawal

//METHOD-1  Using the division operator
#include <iostream>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    long int a[n];
	    long int prod=1;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        prod*=a[i];
	    }
	    for(i=0;i<n;i++){
	        a[i]=prod/a[i];
	    }
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}


//METHOD-2  Without using division operator
#include <iostream>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    long int a[n],temp=1;
	    for(i=0;i<n;i++)cin>>a[i];
	    long int* prod=(long int*)malloc(sizeof(long int)*n);
	    for(i=0;i<n;i++)prod[i]=1;
	    for(i=0;i<n;i++){
	        prod[i]=temp;
	        temp=temp*a[i];
	    }
	    temp=1;
	    for(i=n-1;i>=0;i--){
	        prod[i]=prod[i]*temp;
	        temp=temp*a[i];
	    }
	    for(i=0;i<n;i++)cout<<prod[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
