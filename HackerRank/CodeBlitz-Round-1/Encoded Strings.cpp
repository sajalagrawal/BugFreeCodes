//https://www.hackerrank.com/contests/code-blitz-001/challenges/encoded-strings
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
bool isVowel(char ch);
int main() {
    int n,i,prev=0,next=0;
    string s;
    cin>>n>>s;
    for(;prev<n;prev++){
        if(isVowel(s[prev]))break;
    }
    for(i=prev+1;i<n;i++){
        if(isVowel(s[i])){
            reverse(s.begin()+prev+1,s.begin()+i);
            prev=i;
        }
    }
    cout<<s<<"\n";
    return 0;
}

bool isVowel(char ch){
    switch(ch){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':return true;
        default:return false;
    }
}
