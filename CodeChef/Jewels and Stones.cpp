//https://www.codechef.com/problems/STONES
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,i,k,ans;
	string s,j;
	cin>>t;
	while(t--){
	    ans=0;
	    cin>>j>>s;
	    for(i=0;s[i]!='\0';i++){
	        for(k=0;j[k]!='\0';k++){
	            if(s[i]==j[k]){
	                ans++;
	                s[i]='.';
	            }
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
