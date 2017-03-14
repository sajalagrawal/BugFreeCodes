//https://www.codechef.com/problems/BUY1GET1
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	string str;
	cin>>t;
	while(t--){
	    cin>>str;
	    int ar[52]={0},ans=0;
	    for(i=0;i<str.size();i++){
	        if(str[i]>='a' and str[i]<='z')ar[str[i]-'a']++;
	        else if(str[i]>='A' and str[i]<='Z')ar[26+str[i]-'A']++;
	    }
	    for(i=0;i<52;i++)ans+=(ar[i]+1)/2;
	    cout<<ans<<"\n";
	}
	return 0;
}
