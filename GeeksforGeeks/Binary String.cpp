//http://www.practice.geeksforgeeks.org/problem-page.php?pid=132
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
	int t,i=0;
	cin>>t;
	string str;
	while(t--){
	    int n;
	    cin>>n;
	    cin>>str;
	    int cur=0,sum=0,flag=0;
	    i=0;
	    while(str[i]!='\0'){
	        if(str[i]=='1'){
	            cur=i;
	            flag=1;
	            break;
	        }
	        i++;
	    }
	    if(flag==0){
	        cout<<"0\n";
	    }else if(flag==1){
	        for(i=cur+1;i<str.size();i++){
	            if(str[i]=='1'){
	                cur=i;
	                sum++;
	            }
	        }
	        cout<<(sum)*(sum+1)/2<<"\n";
	    }
	}
	return 0;
}
