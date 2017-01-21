//https://www.hackerrank.com/contests/code-blitz-002/challenges/ozandreas-and-his-magical-rock
//Author - SAJAL AGRAWAL
//@sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int stack[10000];
int top=-1;
void push(int n){
    top++;
    stack[top]=n;
}

void pop(){
    top--;
}

int sizeOfStack(){
    return top+1;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,n,num;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>num;
            if(top==-1 || stack[top]!=num)push(num);
            else if(stack[top]==num)pop();
        }
        cout<<sizeOfStack()<<"\n";
        top=-1;
    }
    return 0;
}
