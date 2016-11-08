//http://www.practice.geeksforgeeks.org/problem-page.php?pid=283
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;
bool isTriplet(int a[],int n);
int main() {
	int t,n,i,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>k;
	        a[i]=k*k;
	    }
	    sort(a,a+n);
	    isTriplet(a,n)?cout<<"Yes\n":cout<<"No\n";
	}
	return 0;
}
bool isTriplet(int a[],int n){
    int i;
    for(i=n-1;i>=2;i--){
        int l=0;
        int r=i-1;
        while(l<r){
            if(a[i]==(a[l]+a[r]))return true;
            else if(a[i]>(a[l]+a[r]))l++;
            else r--;
        }
    }
    return false;
}
