//http://www.practice.geeksforgeeks.org/problem-page.php?pid=702
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,i,n,sum;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    sum=0;
	    int remainder[]={0,0,0}; //for rem=one, two, three
	    for(i=0;i<n;i++)cin>>a[i];
	    for(i=0;i<n;i++){
	        remainder[a[i]%3]++;
	    }
	    //groups of two numbers
	    sum+=(remainder[0]*(remainder[0]-1))/2; //nC2 combinations and premutations
	    sum+=(remainder[1]*remainder[2]);
	    
	    //groups of three numbers
	    sum+=(remainder[0]*(remainder[0]-1)*(remainder[0]-2))/6; //nC3 combinations and premutations
	    sum+=(remainder[0]*remainder[1]*remainder[2]);
	    sum+=(remainder[1]*(remainder[1]-1)*(remainder[1]-2))/6;
	    sum+=(remainder[2]*(remainder[2]-1)*(remainder[2]-2))/6;
	    
	    cout<<sum<<"\n";
	}
	return 0;
}
