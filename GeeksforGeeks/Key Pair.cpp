//http://www.practice.geeksforgeeks.org/problem-page.php?pid=552
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t,n,x,i,j;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
	    int flag=0;
        j=n-1;i=0;
        while(i<j){
            if(a[i]+a[j]==x){
	            cout<<"Yes\n";
	            flag=1;
	            break;
             }
            else if(a[i]+a[j]>x)j--;
            else i++;
        }
    
	    if(flag==0)cout<<"No\n";
	}
	return 0;
}
