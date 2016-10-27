//http://www.practice.geeksforgeeks.org/problem-page.php?pid=240
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,i,j,k,m1,m2;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],b[n];
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n;i++) cin>>b[i];
	    i=0,j=0,k;
	    for(;(i+j)<=n;){
            if(a[i]<b[j]){
                k=a[i];
                i++;
            }else{
                k=b[j];
                j++;
            }
            if((i+j)%2==0)m1=k;
            else m2=k;
	    }
	    cout<<(m1+m2)<<"\n";
	}
	return 0;
}
