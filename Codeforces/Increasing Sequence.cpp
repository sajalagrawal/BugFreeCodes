//http://codeforces.com/problemset/problem/11/A
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,d,a0,a,x,i,moves=0;
	cin>>n>>d>>a0;
	for(i=0;i<n-1;i++){
	    cin>>a;
	    if(a>a0)a0=a;
	    else{
	        x=((a0-a)/d)+1;
	        moves+=x;
	        a0=a+x*d;
	    }
	}
	cout<<moves<<"\n";
	return 0;
}
