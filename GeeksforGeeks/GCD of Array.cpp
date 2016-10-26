//http://www.practice.geeksforgeeks.org/problem-page.php?pid=232
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;
int gcd(int,int);
int main() {
	int t,n,i,ans;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    ans=a[0];
	    for(i=1;i<n;i++){
	        ans=a[i]>ans?gcd(a[i],ans):gcd(ans,a[i]);
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}

int gcd(int x,int y){  //x>y
    int r=x%y;
    while(r){
        x=y;
        y=r;
        r=x%y;
    }
    return y;
}
