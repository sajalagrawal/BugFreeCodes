//http://www.practice.geeksforgeeks.org/problem-page.php?pid=473
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],flag=0;
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++){
	        if(a[i]==(i+1)){
	            cout<<a[i]<<" ";
	            flag=1;
	        }
	    }
	    if(flag==0)cout<<"Not Found";
	    cout<<"\n";
	}
	return 0;
}
