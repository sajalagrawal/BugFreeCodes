//http://www.practice.geeksforgeeks.org/problem-page.php?pid=408
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

void rearrange(int a[],int n);
int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    rearrange(a,n);
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}

void rearrange(int a[],int n){
    int b[n],i=0,j=n-1,k=0;
    while(i<j){
        b[k++]=a[j];
        b[k++]=a[i];
        i++;
        j--;
    }
    if(i==j)b[k++]=a[i];
    for(i=0;i<n;i++)a[i]=b[i];
}
