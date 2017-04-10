//https://www.codechef.com/EXCO1701/problems/EXPLOREI/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
int gcd(int a,int b){  
    int c;
    while(b>0){
        c=a;
        a=b;
        b=c%b;
    }
    return a;
}
int main() {
	// your code goes here
	int a,b,c;
	long long ans=0,ans2;
	cin>>a>>b>>c;
	ans=(a*b)/gcd(a,b);
	ans2=(ans*c)/gcd(ans,c);
	cout<<ans2;
	return 0;
}
