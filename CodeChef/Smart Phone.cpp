//https://www.codechef.com/ZCOPRAC/problems/ZCO14003
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	long long ans=n*a[0];
	for(int j=1;j<n;j++){
	    if((n-j)*a[j]>ans)ans=(n-j)*a[j];
	}
	cout<<ans<<"\n";
	return 0;
}
