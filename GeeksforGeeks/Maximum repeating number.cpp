//http://www.practice.geeksforgeeks.org/problem-page.php?pid=593
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,k,i;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++){
	        a[a[i]%k]+=k;  
	    }
	    int max=a[0]/k,index=0;
	    for(i=1;i<n;i++){
	        if((a[i]/k)>max){
	            max=a[i]/k;
	            index=i;
	        }
	    }
	    cout<<index<<"\n";
	}
	return 0;
}
