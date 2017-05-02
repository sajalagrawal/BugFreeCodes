//https://www.hackerrank.com/challenges/find-point
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,px,py,qx,qy;
    cin>>t;
    while(t--){
        cin>>px>>py>>qx>>qy;
        cout<<(qx+qx-px)<<" "<<(qy+qy-py)<<endl;
    }
    return 0;
}
