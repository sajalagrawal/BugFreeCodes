//https://www.codechef.com/problems/LUCKY5
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	string str;
	cin>>t;
	while(t--){
	    int i,count=0;
	    cin>>str;
	    for(i=0;i<str.size();i++){
	        if(str[i]!='4'and str[i]!='7')count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
