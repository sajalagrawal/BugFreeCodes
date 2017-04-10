//https://www.codechef.com/problems/EXPLORE3
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int t[n],v[n],o[8],count=0,flag=0,vsum=0,i;
	for(i=0;i<n;i++)cin>>t[i];
	for(i=0;i<n;i++)cin>>v[i];
	for(i=0;i<8;i++)cin>>o[i];
	for(i=0;i<n;i++){
	    if(v[i]>=floor(t[i]/3))count++;
	    vsum+=v[i];
	}
	if(count>=floor((7*n)/10))flag++;
	for(i=0;i<8;i++){
	    if(o[i]>vsum){
	        flag=0;
	        break;
	    }
	}
	if(i==8)flag++;
	if(flag==2)cout<<"VIRAT KOHLI IS CHAMPION";
	else cout<<"RCB TRY AGAIN IN NEXT IPL";
	return 0;
} 
