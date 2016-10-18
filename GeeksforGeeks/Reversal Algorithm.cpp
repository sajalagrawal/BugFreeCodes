//http://www.practice.geeksforgeeks.org/problem-page.php?pid=924
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;
void rotateL(int a[],int n);
int main() {
    int t,i,n,d;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    cin>>d;
	    while(d--)rotateL(a,n);
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
void rotateL(int a[],int n){
    int i,first=a[0];
    for(i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=first;
}
