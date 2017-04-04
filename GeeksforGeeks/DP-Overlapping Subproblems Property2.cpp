//http://www.geeksforgeeks.org/dynamic-programming-set-1/

#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    int i,f[n+1];
    f[0]=0;f[1]=1;
    for(i=2;i<=n;i++)
        f[i]=f[i-1]+f[i-2];
    return f[n];
}
int main() {
	// your code goes here
	cout<<fib(9);
	return 0;
}
