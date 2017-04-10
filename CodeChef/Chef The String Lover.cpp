//https://www.codechef.com/EXCO1701/problems/EXPLORE6/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	string str,str2;
	cin>>str>>str2;
	int a[26]={0},b[26]={0},flag=0,i;
	for(i=0;i<str.size();i++){
	    a[str[i]-'a']++;
	}
	for(i=0;i<str2.size();i++){
	    b[str[i]-'a']++;
	}
	for(i=0;i<26;i++){
	    if(a[i]!=b[i]){
	        cout<<"Not Anagram\n";
	        flag=1;
	        break;
	    }
	}
	if(flag==0)cout<<"Y is Anagram of X\n";
	return 0;
}
 
