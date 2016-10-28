//http://www.practice.geeksforgeeks.org/problem-page.php?pid=125
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;
void swap(int* a,int *b){
   int t=*a;
   *a=*b;
   *b=t;
}

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
	    for(i=0;i<=n-2;i=i+2){
	        swap(&a[i],&a[i+1]);
	    }
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
