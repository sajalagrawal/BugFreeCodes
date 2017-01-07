//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1313
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	string test,pattern;
	while(t--){
	    cin>>pattern;
	    cin>>test;
	    int flag=0;
	    if(pattern.size()>test.size()+1)flag=0;
	    else if(pattern[0]=='^'){
	        pattern.erase(0,1);
	        if(test.substr(0,pattern.size())==pattern){
	            flag=1;
	        }
	    }else if(pattern[pattern.size()-1]=='$'){
	        pattern.erase(pattern.size()-1,1);
	        if(test.substr(test.size()-pattern.size(),pattern.size())==pattern){
	            flag=1;
	        }
	    }else{
	        for(int i=0;i<=test.size()-pattern.size();i++){
	            if(test.substr(i,pattern.size())==pattern){
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag==1)cout<<"1\n";
	    else if(flag==0)cout<<"0\n";
	}
	return 0;
}
