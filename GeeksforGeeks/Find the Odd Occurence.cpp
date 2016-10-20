//http://www.practice.geeksforgeeks.org/problem-page.php?pid=836
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<map>
using namespace std;

int main() {
	int t,n,i,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    map<int,int>counts;
	    map<int,int>::iterator I;
	    for(i=0;i<n;i++){
	        cin>>k;
	        counts[k]++;
	    }
	    for(I=counts.begin();I!=counts.end();I++){
	        if((I->second)%2==1){
	            cout<<(I->first)<<"\n";
	            break;
	        }
	    }
	}
	return 0;
}
