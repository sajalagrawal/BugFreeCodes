//https://www.hackerrank.com/contests/code-blitz-001/challenges/bottom-up-approach
//@sajal.agrawal1997@gmail.com

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

long int func(int n,int p);
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,p,i,d;
        cin>>n>>p;
        if(n<3)cout<<"1\n";
        else{
            int a=1,b=1,c=1;
            for(int i=3;i<=n;i++){
                d=(a+b+c)%p;
                a=b;
                b=c;
                c=d;
            }
            cout<<d<<"\n";
        }
    }
    return 0;
}
