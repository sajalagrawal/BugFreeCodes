//http://www.practice.geeksforgeeks.org/problem-page.php?pid=530
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<map>
using namespace std;

int main() {
	int t,k,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    map<int,int> list;
	    //map<int,int>::iterator it;
	    int a[n],sum=0;
	    for(i=0;i<n;i++){
	        cin>>k;
    	    if(list.count(k)==0){
    	        sum+=k;
    	        list[k]++;
    	    }
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
