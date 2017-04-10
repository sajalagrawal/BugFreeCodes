//https://www.codechef.com/problems/EXPLORE5
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	long long n,k;
	cin>>n>>k;
	//cout<<"n="<<n<<"k="<<k<<endl;
	if(n==2)cout<<k<<endl;
	else{
		long long ans=n*(n-1)/2;
		ans++;
		ans*=k;
		cout<<ans<<"\n";
	}
	return 0;
}  
