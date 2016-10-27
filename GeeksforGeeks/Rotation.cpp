//http://www.practice.geeksforgeeks.org/problem-page.php?pid=145
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
	    for(i=0;i<n;i++)cin>>a[i];
	    int flag=0;
	    for(i=0;i<n-1;i++){
	        if(a[i]>a[i+1]){
	            cout<<(i+1)<<"\n";
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)cout<<"0\n";
	}
	return 0;
}
