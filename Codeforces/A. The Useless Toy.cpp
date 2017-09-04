//http://codeforces.com/contest/834/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
int search(char ch){
    switch(ch){
        case 94:return 0;
        case 62:return 1;
        case 60:return 3;
        default: return 2;
    }
}
int main() {
    char a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    char d[]={'^','>','^','<'};
    int start=search(a);
    int end=search(b);
    n=n%4;
    if((start+n)%4==end and (end+n)%4==start)cout<<"undefined\n";
    else if((start+n)%4==end)cout<<"cw\n";
    else cout<<"ccw\n";
	return 0;
}
