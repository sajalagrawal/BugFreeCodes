//http://www.practice.geeksforgeeks.org/problem-page.php?pid=222
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	string str;
	while(t--){
	    cin>>n;
	    cin>>str;
	    int flag=0;
	    for(int i=0,j=n-1;i<=j;i++,j--){
	        if(str[i]!=str[j]){
	            flag=1;
	            cout<<"No\n";
	            break;
	        }
	    }
	    if(flag==0)cout<<"Yes\n";
	}
	return 0;
}
