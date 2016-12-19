//https://www.codechef.com/problems/ALEXTASK
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<limits.h>
using namespace std;
int gcd(int a,int b){  
    int c;
    while(b>0){
        c=a;
        a=b;
        b=c%b;
    }
    return a;
}
int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int i,j,g;
	    long long min=1e18,a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++){
	        for(j=i+1;j<n;j++){
	            g=gcd(a[i],a[j]);
	            if((a[i]*a[j])/g<min)min=(a[i]*a[j])/g;
	        }
	    }
	    cout<<min<<"\n";
	}
	return 0;
}
 
