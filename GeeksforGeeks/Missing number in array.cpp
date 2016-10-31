//http://www.practice.geeksforgeeks.org/problem-page.php?pid=414
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,i,k;
	cin>>t;
	while(t--){
	    cin>>n;
        long int sum=n*(n+1)/2;
        n--;
	    while(n--){
	        cin>>k;
	        sum-=k;
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
