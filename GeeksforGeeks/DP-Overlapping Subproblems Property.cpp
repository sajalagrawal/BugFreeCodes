//http://www.geeksforgeeks.org/dynamic-programming-set-1/
//Time complexity- O(n), Space complexity- O(n)

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 50
#define NIL -1
ll lookup[MAX];

void init(){
    int i;
    for(i=0;i<MAX;i++)lookup[i]=NIL;
}

ll fib(int n){
    if(lookup[n]==NIL){
        if(n<=1)
            lookup[n]=n;
        else
            lookup[n]=fib(n-1)+fib(n-2);
    }
    return lookup[n];
}
int main() {
	// your code goes here
	int i=0;
	init();
	cout<<fib(40);
	return 0;
}
