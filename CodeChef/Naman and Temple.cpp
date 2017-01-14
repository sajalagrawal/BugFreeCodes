//https://www.codechef.com/problems/NCC01
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	    int sum=0;
	    for(int i=1;i<n;i++)sum+=a[i]-a[i-1];
	    cout<<sum<<"\n";
	}
	return 0;
}
