//http://www.practice.geeksforgeeks.org/problem-page.php?pid=629
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t,i,j;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    for(i=0;i<str.size();i++){
	        for(j=str.size()-1-i;j>0;j--){
	            cout<<'.';
	        }
	        cout<<str.substr(0,i+1)<<"\n";
	    }
	}
	return 0;
}
