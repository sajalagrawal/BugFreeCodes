//https://www.hackerrank.com/contests/code-blitz-002/challenges/caesar-and-cipher
//Author - SAJAL AGRAWAL
//@sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <algorithm>
using namespace std;
char encryptchar(char ch,int key){
		if(key<0){
			key=26+key%26;
		}
		if(isupper(ch)){
			return ((char)('A'+(ch-'A'+key)%26));
		}
		else if(islower(ch)){
			return ((char)('a'+(ch-'a'+key)%26));
		}
		return ch;
	}
 string encryptCaesar(string str, int key){
	    string res="";
		int i;
		for(i=0;i<str.length();i++){
			char ch=str[i];
			res+=encryptchar(ch,key);
		}
		return res;
	}
	
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int k;
    cin>>k;
    string str;
    cin>>str;
    cout<<encryptCaesar(str,-k)<<"\n";
    return 0;
}
