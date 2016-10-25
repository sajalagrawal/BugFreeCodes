//http://www.practice.geeksforgeeks.org/problem-page.php?pid=495
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;
long int shortURLToId(string s);
string idToShortURL(int n);
int main() {
	int t;
	long int n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string s=idToShortURL(n);
	    cout<<s<<"\n";
	    cout<<shortURLToId(s)<<"\n";
	}
	return 0;
}

string idToShortURL(int n){
    string shortURL;
    char map[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    while(n){
        shortURL.push_back(map[n%62]);
        n=n/62;
    }
    reverse(shortURL.begin(),shortURL.end());
    return shortURL;
}

long int shortURLToId(string s){
    long int id=0;
    int i;
    for(i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            id=id+pow(62,(s.size()-i-1))*(s[i]-'a');
        }else if(s[i]>='A' && s[i]<='Z'){
            id=id+pow(62,(s.size()-i-1))*(s[i]-'A'+26); 
        }else{
             id=id+pow(62,(s.size()-i-1))*(s[i]-'0'+52);
        }
    }
    return id;
}
