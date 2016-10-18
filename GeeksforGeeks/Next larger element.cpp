//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1095
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,i,flag,j;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++){
	        flag=0;
	        for(j=i;j<n;j++){
	            if(a[j]>a[i]){
	                cout<<a[j]<<" ";
	                flag=1;break;
	            }
	        }
	        if(flag==0)cout<<"-1 ";
	    }
	    cout<<"\n";
	}
	return 0;
}
