//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1305
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;
int buildingsRecievingLight(int a[],int n);
int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    cout<<buildingsRecievingLight(a,n)<<"\n";
	}
	return 0;
}

int buildingsRecievingLight(int a[],int n){
    int i=1,ans=1,maxH=a[0];
    for(;i<n;i++){
        if(a[i]>=maxH){
            ans++;
            maxH=a[i];
        }
    }
    return ans;
}
