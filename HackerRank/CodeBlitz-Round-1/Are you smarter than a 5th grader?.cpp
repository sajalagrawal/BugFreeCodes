//https://www.hackerrank.com/contests/code-blitz-001/challenges/kya-ap-panchvi-pass-se-tez-hai
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


int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<(int)pow(floor(sqrt(n)),2)<<"\n";
    }
    return 0;
}
