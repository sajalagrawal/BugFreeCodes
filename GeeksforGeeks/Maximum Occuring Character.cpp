//http://www.practice.geeksforgeeks.org/problem-page.php?pid=87
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
	    n=str.size();
	    cin>>str;
	    int ar[26]={0},flag=0;
	    for(i=0;i<str.size();i++){
	        ar[str[i]-'a']++;
	    }
	    //for(i=0;i<26;i++)cout<<ar[i]<<" ";
	    //cout<<"\n";
	    int max=0,index;
	    for(i=0;i<26;i++){
	        if(ar[i]>max){
	            max=ar[i];
	            index=i;
	        }
	    }
	    cout<<(char)('a'+index)<<"\n";
	}
	return 0;
}
