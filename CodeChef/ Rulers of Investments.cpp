//https://www.codechef.com/GMCO2016/problems/GMCO16RI/
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;
 
int main() {
	int t,l,i;
	cin>>t;
	string s;
	for(i=0;i<t;i++){
	    cin>>s;
	    l=s.size();
	    if(s[l-1]=='y'){
	        cout<<"Case #"<<(i+1)<<": "<<s<<" is ruled by nobody.\n";
	        
	    }else if(s[l-1]=='a'||s[l-1]=='e'||s[l-1]=='i'||s[l-1]=='o'||s[l-1]=='u'){
	        cout<<"Case #"<<(i+1)<<": "<<s<<" is ruled by a queen.\n";
	   
	    }else{
	        cout<<"Case #"<<(i+1)<<": "<<s<<" is ruled by a king.\n";
	    }
	}
	return 0;
}
