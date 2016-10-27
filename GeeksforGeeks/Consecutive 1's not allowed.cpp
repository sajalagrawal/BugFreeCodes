//http://www.practice.geeksforgeeks.org/problem-page.php?pid=252
//Author- Sajal Agrawal
//Username:sajalagrawal

//http://www.geeksforgeeks.org/count-number-binary-strings-without-consecutive-1s/
#include <iostream>
using namespace std;
int countStrings(int n);
int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<countStrings(n)<<"\n";
	}
	return 0;
}

int countStrings(int n){
    int a[n+1],b[n+1],i; //a[]=numbers ending in 1 b[]=nos ending in 0
    long int ans;
    a[1]=b[1]=1;
    for(i=2;i<=n;i++){
        a[i]=b[i-1]%(1000000007);
        b[i]=(a[i-1]+b[i-1])%(1000000007);
    }
    ans=(a[n]+b[n])%(1000000007);
    return ans;
}
