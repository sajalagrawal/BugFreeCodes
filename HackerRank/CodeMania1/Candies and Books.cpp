//https://www.hackerrank.com/contests/codemania1/challenges/candies-and-books
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n;
    cin>>n;
    if(n%5==4)n++;
    cout<<(4*(n/5)+n%5);
    return 0;
}