//http://www.practice.geeksforgeeks.org/problem-page.php?pid=983
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    for(int i=0;i<str.size();i++){
	        str[i]-=32;
	    }
	    cout<<str<<"\n";
	}
	return 0;
}
