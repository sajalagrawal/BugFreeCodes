//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/monk-and-philosophers-stone/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
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

long long int sumOfStack(){
    long long int sum=0;
    for(int i=0;i<=top;i++)sum+=stack[i];
    return sum;
}

int sizeOfStack(){
    return top+1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int q,x,i=0;
    string str;
    cin>>q>>x;
    while(q-- && sumOfStack()!=x){
        cin>>str;
        if(str=="Harry"){
            push(a[i]);
            i++;
        }else if(str=="Remove"){
            pop();
        }
    }
    
    if(sumOfStack()==x)cout<<sizeOfStack()<<"\n"; //elements in Monk's stack
    else cout<<"-1\n";
    return 0;
}


