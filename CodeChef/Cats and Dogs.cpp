//https://www.codechef.com/problems/CATSDOGS
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
bool isPossible(long long c,long long d,long long l){
    if(l%4!=0)return false;
    if(l>(c+d)*4 or l<d*4)return false;
    long long animals=l/4;
    animals-=d;
    c=c-d*2;
    if(c>animals)return false;
    return true;
}
 
int main() {
	// your code goes here
	long long t,c,d,l;
	cin>>t;
	while(t--){
	    cin>>c>>d>>l;
	    if(isPossible(c,d,l))cout<<"yes\n";
	    else cout<<"no\n";
	}
	return 0;
}
 
