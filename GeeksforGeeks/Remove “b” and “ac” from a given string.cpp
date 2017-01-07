//http://www.practice.geeksforgeeks.org/problem-page.php?pid=297
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    char str[200];
	    cin>>str;
	    int n=strlen(str);
	    int j=0,i=0;
	    while(j<n){
	        if(j<n-1 && str[j]=='a' && str[j+1]=='c')
	            j=j+2;
	        else if(str[j]=='b')
	            j++;
	        else{
	            str[i++]=str[j++];
	            //cout<<"str["<<i<<"-1]="<<str[i-1]<<" ";
	        }
	    }
	    str[i]='\0';
	    cout<<str<<"\n";
	}
	return 0;
}
