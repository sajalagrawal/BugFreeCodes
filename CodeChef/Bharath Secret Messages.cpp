//https://www.codechef.com/CRES2017/problems/CRES03/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<string.h>
using namespace std;
 
int main() {
	// your code goes here
	int n,k;
	cin>>n;
	char str[n];
	cin>>str;
	cin>>k;
	k=k%26;
	for(int i=0;i<n;i++){
	    if(str[i]>='A' && str[i]<='Z'){
	        str[i]='A'+(str[i]-'A'+k)%26;
	    }
	    else if(str[i]>='a' && str[i]<='z'){
	        str[i]='a'+(str[i]-'a'+k)%26;
	    }
	}
	cout<<str<<"\n";
	return 0;
}
