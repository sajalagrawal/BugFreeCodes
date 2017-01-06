//http://www.practice.geeksforgeeks.org/problem-page.php?pid=147
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
char stack[105];
int top=-1;
char pop();
void push(char ch);
int main()
 {
	int t,i;
	string str;
	cin>>t;
	while(t--){
	    int flag=1; //0 for not balanced
	    cin>>str;
	    for(i=0;i<str.size();i++){
	        if(str[i]=='{'||str[i]=='['||str[i]=='('){
	            push(str[i]);
	            flag=0;
	        }
	        else if(str[i]=='}'){
	            if(pop()!='{'){
	                flag=0;
	                break;
	            }else flag=1;
	        }else if(str[i]==']'){
	            if(pop()!='['){
	                flag=0;
	                break;
	            }else flag=1;
	        }else if(str[i]==')'){
	            if(pop()!='('){
	                flag=0;
	                break;
	            }else flag=1;
	        }
	    }
	    if(flag==1)cout<<"balanced\n";
	    else if(flag==0)cout<<"not balanced\n";
	}
	return 0;
}

void push(char ch){
    if(top==104)return;
    stack[++top]=ch;
}

char pop(){
    if(top==-1)return '~';
    return stack[top--];
}
