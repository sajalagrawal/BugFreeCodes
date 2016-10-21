//http://www.practice.geeksforgeeks.org/problem-page.php?pid=732
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t,n,x,i,j,k,flag;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    int a[n];
	    flag=0;
	    for(i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
	    for(i=0;i<n;i++){
	        j=i+1;
	        k=n-1;
	        while(j<k){
	             if((a[i]+a[j]+a[k])==x){
    	            cout<<"1\n";
    	            flag=1;
    	            break;
    	        }else if((a[i]+a[j]+a[k])>x){
    	            k--;
    	        }else{
    	            j++;
    	        }
	        }
	       
	    }
	    if(flag==0)cout<<"0\n";
	}
	return 0;
}
