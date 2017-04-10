//https://www.codechef.com/EXCO1701/problems/EXPLORE4/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int x,y,w,z,r;
	cin>>x>>y>>w>>z>>r;
    long long d1=(x-w)*(x-w),d2=(y-z)*(y-z);
    if(r*r>=d1+d2)cout<<"Unlimited Hoyenga\n";
    else cout<<"Nahi Hoyenga\n";
	return 0;
}
 
