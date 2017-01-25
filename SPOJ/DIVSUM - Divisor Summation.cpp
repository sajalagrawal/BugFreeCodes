//http://www.spoj.com/problems/DIVSUM/
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	long long int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int i;
		long long int sum=0;
		for(i=1;i*i<n;i++){
			if(n%i==0)sum+=i+n/i;
		}
		if(i*i==n)sum+=i;
		sum-=n;
		cout<<sum<<"\n";
	}
	return 0;
}
