//http://www.practice.geeksforgeeks.org/problem-page.php?pid=196
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i;
	cin>>t;
	while(t--){
	    string str;
	    cin>>n;
	    cin>>str;
	    int ar[26]={0},flag=0;
	    for(i=0;i<str.size();i++){
	        ar[str[i]-'a']++;
	    }
	    //for(i=0;i<26;i++)cout<<ar[i]<<" ";
	    //cout<<"\n";
	    for(i=0;i<str.size();i++){
	        if(ar[str[i]-'a']==1){
	            cout<<str[i]<<"\n";
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)cout<<"-1\n";
	}
	return 0;
}
