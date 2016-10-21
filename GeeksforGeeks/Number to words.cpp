//http://www.practice.geeksforgeeks.org/problem-page.php?pid=669
//Author- Sajal Agrawal
//Username:sajalagrawal


#include <iostream>
using namespace std;
string toWords(int n);
const char* numNames[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
const char* tensNames[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<toWords(n)<<"\n";
	}
	return 0;
}

string toWords(int n){
    string ans;
    if(n/1000){
        ans+=numNames[n/1000];
        ans+=" thousand ";
        n=n%1000; 
    }
    if(n/100){
        ans+=numNames[n/100];
        ans+=" hundred ";
        n=n%100;
        if(n)ans+="and ";
    }
    if(n/10){
        if(n/10==1){
            ans+=numNames[n];
            n=0;
        }else{
            ans+=tensNames[n/10];
            ans+=" ";
            n=n%10;
        }
    }
    if(n/1){
        ans+=numNames[n];
    }
    return ans;
}
