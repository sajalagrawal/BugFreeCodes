//https://www.codechef.com/problems/CRES05
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int k[n],p[n],flag=0,x;
    	   for(int i=0;i<n;i++)cin>>k[i];
              	   for(int i=0;i<n;i++)cin>>p[i];
    	   for(x=1;x<=99999;x++){
    	    flag=0;
    	    for(int i=0;i<n;i++){
    	        if(x%k[i]!=p[i]){
    	            flag=1;
    	            break;
    	        }
    	    }
    	    if(flag==0)break;
    	}
	    if(x==99999)cout<<"0\n";
	    else cout<<x<<"\n";
	}
	
	
	return 0;
}
