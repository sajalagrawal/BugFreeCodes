//http://www.practice.geeksforgeeks.org/problem-page.php?pid=667
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t,n,p,flag,i,j;
	cin>>t;
	while(t--){
	    cin>>n>>p;
	    int a[n];
	    flag=0;
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++){
	        for(j=0;j<n;j++){
	            if(i!=j && a[i]*a[j]==p && flag==0){
	                flag=1;
	                cout<<"Yes\n";
	                break;
	            }
	        }
	    }
	    if(flag==0)cout<<"No\n";
	}
	return 0;
}
