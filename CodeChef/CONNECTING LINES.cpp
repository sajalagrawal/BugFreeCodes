//https://www.codechef.com/problems/NIKKLIN
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
char stack[100001];
int top=-1;
char pop(){
    top--;
}
void push(char n){
    top++;
    stack[top]=n;
}
int sizeOfStack(){
    return top+1;
}
int main() {
	// your code goes here
	int t,i,words=0;
	cin>>t;
	string str;
	while(t--){
	    cin>>str;
	    for(i=0;i<str.size();i++){
	        if(top==-1 or stack[top]!=str[i])push(str[i]);
	        else{
	            pop();
	        }
	    }
	    if(sizeOfStack()==0)
	            words++;
	    top=-1;
	}
	cout<<words<<"\n";
	return 0;
}
