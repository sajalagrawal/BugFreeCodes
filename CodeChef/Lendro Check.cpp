//https://www.codechef.com/CRES2017/problems/CRES04/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	string str;
	while(t--){
	    int ar[26]={0},flag=0;
	    cin>>str;
	    //cout<<"size:"<<str.size()<<"\n";
	    for(int i=0;i<str.size();i++){
	        if(str[i]>='a' && str[i]<='z')ar[str[i]-'a']++;
	        else if(str[i]>='A' && str[i]<='Z')ar[str[i]-'A']++;
	    }
	    //for(int i=0;i<26;i++)cout<<ar[i]<<" ";
	    //cout<<"\n";
	    for(int i=0;i<26;i++){
	        if(ar[i]%2!=0 and flag==0){
	            //cout<<"ar[i]%2!=0 i="<<i<<"\n";
	            flag=1;  
	        }
	        else if(ar[i]%2!=0 and flag==1){
	            flag=2;
	            break;
	        }
	    }
	    //cout<<"flag="<<flag<<"\n";
	    if(str.size()%2==0){
	        if(flag==0)cout<<"Yes\n";
	        else cout<<"No\n";
	    }else{
	        if(flag==1)cout<<"Yes\n";
	        else cout<<"No\n";
	    }
	}
	return 0;
}
