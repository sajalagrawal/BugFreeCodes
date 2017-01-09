//http://www.practice.geeksforgeeks.org/problem-page.php?pid=392
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
bool isPalindrome(string s);
int main()
 {
	int t;
	cin>>t;
	string str;
	//cout<<isPalindrome("abss")<<"\n";
	//cout<<isPalindrome("aba")<<"\n";
	while(t--){
	    cin>>str;
	    int maxSize=0,start=0,end=0;
	    for(int i=0;i<str.size()-1;i++){
	        for(int j=i+1;j<str.size();j++){
	            string test=str.substr(i,j-i+1);
	            if(isPalindrome(test)){
	                if(test.size()>maxSize){
	                    //cout<<"test="<<test;
	                    maxSize=test.size();
	                    //cout<<" start="<<i<<" end="<<j<<"\n";
	                    start=i;
	                    end=j;
	                }
	            }
	        }
	    }
	    cout<<str.substr(start,end-start+1)<<"\n";
	}
	return 0;
}

bool isPalindrome(string s){
    int i=0,j=s.size()-1;
    for(;i<=j;i++,j--){
        if(s[i]!=s[j])return 0;
    }
    return 1;
}
