//http://www.practice.geeksforgeeks.org/problem-page.php?pid=632
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t,i;
	cin>>t;
	string str;
	while(t--){
	    cin>>str;
	    cout<<str<<"\n";
	    for(i=0;i<str.size()-1;i++){
	        str[i]='.';
	        cout<<str<<"\n";
	    }
	}
	return 0;
}
