//http://www.practice.geeksforgeeks.org/problem-page.php?pid=130
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
	    int maxdiff=0;
	    if(n<1)cout<<"0\n";
	    else{
	        for(i=0;i<n-1;i++){
	        if((a[i+1]-a[i])>maxdiff)maxdiff=(a[i+1]-a[i]);
	    }
	    cout<<maxdiff<<"\n";   
	    }
	}
	return 0;
}
