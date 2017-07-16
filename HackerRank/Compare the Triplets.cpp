//https://www.hackerrank.com/challenges/compare-the-triplets/problem
//Author- Sajal Agrawal
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[3],b[3],alice=0,bob=0;
    for(int i=0;i<3;i++)cin>>a[i];
    for(int i=0;i<3;i++){
        cin>>b[i];
        if(a[i]>b[i])alice++;
        if(a[i]<b[i])bob++;
    }
    cout<<alice<<" "<<bob<<endl;
    return 0;
}
