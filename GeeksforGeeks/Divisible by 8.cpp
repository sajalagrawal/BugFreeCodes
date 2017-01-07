//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1326
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
bool isDivisibleBy8(char a,char b,char c){
    int p=a-'0',q=b-'0',r=c-'0';
    int num1=p+q*10+r*100;
    if(num1%8==0)return true;
    num1=p+r*10+q*100;
    if(num1%8==0)return true;
    num1=q+p*10+r*100;
    if(num1%8==0)return true;
    num1=q+r*10+p*100;
    if(num1%8==0)return true;
    num1=r+p*10+q*100;
    if(num1%8==0)return true;
    num1=r+q*10+p*100;
    if(num1%8==0)return true;
    return false;
}
using namespace std;
int main()
 {
	int t,num;
	cin>>t;
	while(t--){
	    //cout<<"t=="<<t<<"\n";
		string str;
	    cin>>str;
	    //cout<<"str="<<str<<"\n";
	    int res=0,flag=0;
	    int series[3]={1,2,4},index=0;
	    if(str.size()==1){
	        res=str[0]-'0';
	        if(res%8==0){
	            flag=1;
	        }
	    }else if(str.size()==2){
	        res=(str[1]-'0')*1+(str[0]-'0')*2;
	        if(res%8==0){
	            flag=1;
	        }else{
	             res=(str[1]-'0')*2+(str[0]-'0')*1;
	             if(res%8==0){
	                 flag=1;
	             }
	        }
	    }
	    else{
	        for(int i=0;i<str.size();i++){
	            for(int j=i+1;j<str.size();j++){
	                for(int k=j+1;k<str.size();k++){
	                    if(isDivisibleBy8(str[i],str[j],str[k])){
	                        flag=1;
	                        break;
	                    }
	                }
	            }
	        }
	    }
	    if(flag==1)cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
