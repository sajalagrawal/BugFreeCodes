//https://www.codechef.com/problems/NSIT13
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t=10,k;
	while(t--){
	    vector<int> vec;
	    int n=10;
	    while(n--){
	        cin>>k;
	        k=k%42;
	        if(find(vec.begin(),vec.end(),k)==vec.end()){
	            vec.push_back(k);
	        }
	    }
	    cout<<vec.size()<<"\n";
	}
	return 0;
}
