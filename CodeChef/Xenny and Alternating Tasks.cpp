//https://www.codechef.com/MARCH17/problems/XENTASK/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	long long t,n,i,k;
	cin>>t;
	while(t--){
	    long long x_odd=0,x_even=0,y_odd=0,y_even=0;
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>k;
	        if(i%2==0)x_even+=k;
	        else x_odd+=k;
	    }
	    for(i=0;i<n;i++){
	        cin>>k;
	        if(i%2==0)y_even+=k;
	        else y_odd+=k;
	    }
	    cout<<min((x_even+y_odd),(x_odd+y_even))<<"\n";
	}
	return 0;
}
 
