//https://www.codechef.com/problems/DWNLD
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,i;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int sum=0;
	    int time[n],data[n];
	    for(i=0;i<n;i++)cin>>time[i]>>data[i];
	    for(i=1;i<n;i++)time[i]+=time[i-1];
	    for(i=0;i<n;i++){
	        if(time[i]>=k){
	            sum+=(time[i]-k)*data[i];
	            k=time[i];
	        }
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
