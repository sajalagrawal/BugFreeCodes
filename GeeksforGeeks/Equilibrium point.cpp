//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1294
//Author- Sajal Agrawal
//Username:sajalagrawal

#include<iostream>
using namespace std;

#include <stdio.h>
int sumR(int a[],int pos,int len);
int sumL(int a[],int pos);
int main() {
	int t,i,n,flag;
	cin>>t;
	while(t--){
	    cin>>n;
	    flag=0;
        int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    if(n==1)cout<<"1\n";
	    else{
    	    for(i=1;i<n;i++){
    	        if(sumL(a,i)==sumR(a,i,n)){
    	            cout<<(i+1)<<"\n";
    	            flag=1;
    	        }
    	    }
    	    if(flag==0)cout<<"-1\n";
	    }
	}
	return 0;
}

int sumL(int a[],int pos){
    int i,sum=0;
    for(i=0;i<pos;i++)sum+=a[i];
    return sum;
}

int sumR(int a[],int pos,int len){
    int i,sum=0;
    for(i=pos+1;i<len;i++)sum+=a[i];
    return sum;
}
