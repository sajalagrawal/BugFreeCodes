//http://www.practice.geeksforgeeks.org/problem-page.php?pid=291
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
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count=0;
	    for(i=0;i<n;i++){
	        if(a[i]!=0){
	            a[count++]=a[i];
	        }
	    }
	    while(count<n)a[count++]=0;
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
