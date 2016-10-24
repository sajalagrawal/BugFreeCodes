//http://www.practice.geeksforgeeks.org/problem-page.php?pid=516
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;
void rev(int a[],int l,int r);
int main() {
	int t,n,i,l,r;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    cin>>l>>r;
	    l--;r--;  //0-base indexing
	    rev(a,l,r);
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	    
	}
	return 0;
}

void rev(int a[],int l,int r){
    int i,j,temp;
    for(i=l,j=r;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
    }
}
