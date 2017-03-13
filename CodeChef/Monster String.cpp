//https://www.codechef.com/problems/CRES105
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int ar[26]={0,};
	    for(i=0;i<str.size();i++){
	        if(str[i]>='a' and str[i]<='z')ar[str[i]-'a']++;
	        else if(str[i]>='A' and str[i]<='Z')ar[str[i]-'A']++;
	    }
	    int flag=1;
	    for(i=0;i<26;i++){
	        if(ar[i] and ((ar[i]%2!=0 and i%2==0) or (ar[i]%2!=1 and i%2==1))){
	            flag=0;
	            break;
	        }
	    }
	    cout<<"@"<<flag<<"\n";
	}
	return 0;
}
