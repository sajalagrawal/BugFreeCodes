//https://www.hackerrank.com/challenges/migratory-birds/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,k;
    cin>>n;
    map<int,int> mp;
    while(n--){
        cin>>k;
        mp[k]++;
    }
    map<int,int>::iterator it;
    int minn=INT_MIN,type=-1;
    for(it=mp.begin();it!=mp.end();it++){
        if((*it).second>minn){
            type=(*it).first;
            minn=(*it).second;
        }
    }
    cout<<type<<"\n";
	return 0;
}

