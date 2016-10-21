//http://www.practice.geeksforgeeks.org/problem-page.php?pid=623
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;
bool isLeader(int a[],int i,int n);
int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++){
	        if(isLeader(a,i,n)==1)cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}

bool isLeader(int a[],int i,int n){
    int j=i+1;
    if(i==n-1)return true;
    for(;j<n;j++){
        if(a[j]>=a[i])return false;
    }
    return true;
}
