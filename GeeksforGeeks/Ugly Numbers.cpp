//http://www.practice.geeksforgeeks.org/problem-page.php?pid=553
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int minimum(int a,int b,int c){
    if(a<=b){
        if(c<=a)return c;
        return a;
    }
    if(c<=b)return c;
    return b;
}
int main()
 {
	int a[500],t,n,i;
	cin>>t;
	a[0]=1;
	int i2=0,i3=0,i5=0;
	int nextNum,nextMultipleOf2=2,nextMultipleOf3=3,nextMultipleOf5=5;
	for(i=1;i<500;i++){
	    nextNum=minimum(nextMultipleOf2,nextMultipleOf3,nextMultipleOf5);
	    a[i]=nextNum;
	    if(nextNum==nextMultipleOf2){
	        i2++;
	        nextMultipleOf2=a[i2]*2;
	    }
	    if(nextNum==nextMultipleOf3){
	        i3++;
	        nextMultipleOf3=a[i3]*3;
	    }
	    if(nextNum==nextMultipleOf5){
	        i5++;
	        nextMultipleOf5=a[i5]*5;
	    }
	}
	//for(i=0;i<500;i++)cout<<a[i]<<" ";
	//cout<<"\n";
	while(t--){
	    cin>>n;
	    cout<<a[n-1]<<"\n";
	}
	return 0;
}
