//http://www.practice.geeksforgeeks.org/problem-page.php?pid=569
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
#include <algorithm>
#include<string.h>
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
using namespace std;
int main()
 {
	int t;
	string s1,s2;
	cin>>t;
	while(t--){
	    cin>>s1>>s2;
	    int sum=0;
	    char s3[200]; 
	    reverse(s1.begin(),s1.end());
	    reverse(s2.begin(),s2.end());
	    int carry=0,i=0;
	    while(s1[i]!='\0' && s2[i]!='\0'){
	        sum=s1[i]-48+s2[i]-48+carry;
	        if(sum==1){
	            carry=0;
	        }
	        else if(sum==2){
	            sum=0;
	            carry=1;
	        }else if(sum==3){
	            sum=1;
	            carry=1;
	        }
	        s3[i]=sum+'0';
	        //cout<<"s["<<i<<"]"<<s3[i]<<"\n";
	        i++;
	    }
	    int j=i;
	    while(s1[j]!='\0'){
	        sum=s1[j]-48+carry;
	        if(sum==1){
	            carry=0;
	        }
	        else if(sum==2){
	            sum=0;
	            carry=1;
	        }
	        s3[j]=sum+'0';
	        //cout<<"s["<<j<<"]"<<s3[j]<<"\n";
	        j++;
	        //cout<<"j=="<<j<<"\n";
	    }
	    if(s2[i]!='\0'){
	        j=i;
	        while(s2[j]!='\0'){
    	        sum=s2[j]-48+carry;
    	        if(sum==1){
    	            carry=0;
    	        }
    	        else if(sum==2){
    	            sum=0;
    	            carry=1;
    	        }
    	        s3[j]=sum+'0';
    	        //cout<<"s["<<j<<"]"<<s3[j]<<"\n";
    	        j++;
	        }
	    }
	    if(carry){
	        //cout<<"carry="<<carry<<"\n";
	        s3[j]=carry+'0';
	        //cout<<"s["<<j<<"]"<<s3[j]<<"\n";
	        j++;
	        //cout<<"rry j=="<<j<<"\n";
	    }
	    s3[j]='\0';
	    //cout<<"before rev s3=="<<s3<<"\n";
	    //reverse(s3.begin(),s3.end());
	    strrev(s3);
	    cout<<s3<<"\n";
	}
	return 0;
}
