//http://codeforces.com/problemset/problem/4/C
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
    map<string,int> dict;
    string str;
	while(n--){
	    cin>>str;
	    if(dict.count(str)==0){
	        cout<<"OK\n";
	        dict[str]=1;
	    }else{
	        cout<<str<<dict[str]<<"\n";
	        dict[str]++;
	    }
	}
	return 0;
}
