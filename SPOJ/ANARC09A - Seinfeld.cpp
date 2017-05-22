//http://www.spoj.com/problems/ANARC09A/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int top=-1;
char stck[2000];

char pop(){
    if(top==-1)return '-';
    return stck[top--];
}

void push(char ch){
    if(top==1999)return;
    stck[++top]=ch;
    return ;
}
int size(){
	return top+1;
}
int main() {
    int t=1;
    while(true){
        string str;
        int i;
        cin>>str;
        //cout<<str<<"\n";
        if(str[0]=='-')break;
        for(i=0;i<str.size();i++){
            if(str[i]=='{')push('{');
            else if(top>=0  and stck[top]=='{' and str[i]=='}')pop();
            else{
                push('}');
            }
        }
        int count=0;
        if(top==-1)cout<<t++<<". 0\n";
        else{
            for(i=0;i<size();i=i+2){
                if(stck[i]!=stck[i+1])count+=2;
                else count++;
            }
            cout<<t++<<". "<<count<<"\n";
        }
        
        top=-1;
    }
	return 0;
}
