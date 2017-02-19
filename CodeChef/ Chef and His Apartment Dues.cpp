//https://www.codechef.com/FEB17/problems/CHEFAPAR
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    long int sum=0;
	    int a[n],flag=0;
	    for(int i=0;i<n;i++)cin>>a[i];
	    for(int i=0;i<n;i++){
	        if(a[i]==0){
	            flag=1;
	            sum+=1100;
	        }
	        if(flag==1 and a[i+1]==1)sum+=100;
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
 
