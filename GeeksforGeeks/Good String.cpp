//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1366
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int i,flag=1; //YES
	    for(i=0;i<str.size()-1;i++){
	        //cout<<abs(str[i]-str[i+1])<<" ";
	        if(abs(str[i]-str[i+1])!=1 && abs(str[i]-str[i+1])!=25){
	            flag=0;
	            break;
	        }
	    }
	    if(flag==1)cout<<"YES\n";
	    else if(flag==0)cout<<"NO\n";
	}
	return 0;
}
