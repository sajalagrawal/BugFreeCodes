//http://www.practice.geeksforgeeks.org/problem-page.php?pid=540
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,i,temp;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    bool flag=true; //true for '<' false for '>'
	    for(i=0;i<n-1;i++){
	        if(flag){
	            if(a[i]>a[i+1]){
	                temp=a[i];
	                a[i]=a[i+1];
	                a[i+1]=temp;
	            }
	        }else{
	            if(a[i]<a[i+1]){
	                temp=a[i];
	                a[i]=a[i+1];
	                a[i+1]=temp;
	            }
	        }
	        flag=!flag;
	    }
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
