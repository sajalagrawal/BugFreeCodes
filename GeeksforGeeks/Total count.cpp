//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1124
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;
int totalCount(int a[],int n,int k);
int main() {
	int t,n,k,i;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    cout<<totalCount(a,n,k)<<"\n";
	}
	return 0;
}

int totalCount(int a[],int n,int k){
    int i,ans=0;
    for(i=0;i<n;i++){
        if(a[i]%k==0){
            ans=ans+a[i]/k;
        }else{
            ans=ans+a[i]/k;
            ans++;
        }
    }
    return ans;
}
