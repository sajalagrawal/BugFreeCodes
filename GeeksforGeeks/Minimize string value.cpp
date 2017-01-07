//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1304
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t,k,i;
	cin>>t;
	string str;
	while(t--){
	    cin>>str;
	    cin>>k;
	    if(k>str.size())k=str.size(); //can't remove more elements than size of string
	    int ar[26]={0};
	    for(i=0;i<str.size();i++){
	        ar[str[i]-'a']++;
	    }
	    while(k--){
	        int max=ar[0],index=0;
	        for(i=1;i<26;i++){
	            if(ar[i]>max){
	                max=ar[i];
	                index=i;
	            }
	        }
	        ar[index]--;
	    }
	    int res=0;
	    for(i=0;i<26;i++){
	        res+=ar[i]*ar[i];
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
