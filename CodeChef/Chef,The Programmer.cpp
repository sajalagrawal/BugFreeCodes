//https://www.codechef.com/EXCO1701/problems/EXPLORE2/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n==2)return true;
    if(n==1 || n%2==0)return false;
   
    int i=3;
    while(i*i<=n){
        if(n%i==0)return false;
        i=i+2;
    }
    return true;
}
int main() {
	// your code goes here
	string str;
	int ch=0,i;
	char c;
	cin>>str;
	cin>>c;
	for(i=0;i<str.size();i++){
	    if(str[i]==c)ch++;
	}
	if(ch==2)cout<<"evenprime";
	else if(isPrime(ch)){
	    cout<<"oddprime";
	}else cout<<"notprime";
	return 0;
}
