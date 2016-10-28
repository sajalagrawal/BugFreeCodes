//http://www.practice.geeksforgeeks.org/problem-page.php?pid=292
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<algorithm>
#include<string.h>
using namespace std;
char* removeDuplicates(char* str);
int main() {
	int t,i,j;
	cin>>t;
	while(t--){
	    char s[100];
	    cin>>s;
	    cout<<removeDuplicates(s)<<"\n";
	}
	return 0;
}

char* removeDuplicates(char* str){
    bool hash[256]={0};
    int resInd=0,i=0;
    while(*(str+i)!='\0'){
        char temp=*(str+i);
        if(hash[temp]==0){
            hash[temp]++;
            *(str+resInd)=*(str+i);
            resInd++;
        }
        i++;
    }
    *(str+resInd)='\0';
    return str;
}
