//https://www.codechef.com/LTIME46/problems/BRLADDER/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    int i=0,flag=0;
	    //cout<<"a="<<a<<"b="<<b<<"\n";
	    if(a%2==0 and b%2==0 and abs(a-b)==2){
	        cout<<"YES\n";
	        goto label;
	    }
	    if(a%2==1 and b%2==1 and abs(a-b)==2){
	        cout<<"YES\n";
	        goto label;
	    }
	   
      if(max(a,b)%2==0 and abs(a-b)==1){
	        cout<<"YES\n";
	        goto label;
	    }
	   if(flag==0)cout<<"NO\n";
	   label:;
	}
	return 0;
}
 
