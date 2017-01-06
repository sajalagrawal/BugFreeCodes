//http://www.practice.geeksforgeeks.org/problem-page.php?pid=282
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t,i;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int first=0;
	    for(i=first+1;i<=str.size();i++){
	        if(str[i]=='.'||i==str.size()){
	            reverse(str.begin()+first,str.begin()+i);
	            first=i+1;
	        }
	    }
	    reverse(str.begin(),str.end());
	    cout<<str<<"\n";
	}
	return 0;
}
