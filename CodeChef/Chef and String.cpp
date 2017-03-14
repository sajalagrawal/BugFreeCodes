//https://www.codechef.com/problems/CHRL2
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string str;
    int i,c=0,h=0,e=0,f=0;
	cin>>str;
	for(i=0;i<str.size();i++){
	    if(str[i]=='C')c++;
	    else if(str[i]=='H' and h<c)h++;
	    else if(str[i]=='E' and e<h)e++;
	    else if(str[i]=='F' and f<e)f++;
	}
	cout<<f<<"\n";
	return 0;
}
