//https://www.codechef.com/problems/NOPC10
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;

//it was monday on 1 jan 1990
string days[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int months[]={31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
	// your code goes here
	int d,m,y,i;
	cin>>d>>m>>y;
	if(y%4==0 and (y%400==0 or y%100!=0))
	    months[1]=29;
	for(i=1900;i<y;i++){
	    if(i%4==0 and (i%400==0 or i%100!=0))d+=366;
	    else d+=365;
	}
	for(i=0;i<m-1;i++){
	    d+=months[i];
	}
	d=d%7;
	d--;
	cout<<days[d]<<"\n";
	return 0;
}
