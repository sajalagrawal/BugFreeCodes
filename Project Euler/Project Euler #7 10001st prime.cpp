//https://www.hackerrank.com/contests/projecteuler/challenges/euler007/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
vector<int> data;
void store(){
    int i=5,j;
    data.push_back(2);
    data.push_back(3);
    //cout<<"data.size()="<<data.size()<<endl;
    while(data.size()!=10001){
        //cout<<"i="<<i<<endl;
        for(j=0;j<data.size();j++){
            //cout<<"j="<<j<<"data="<<data[j]<<endl;
            if(i%data[j]==0)break;
        }
        if(j==data.size()){
            data.push_back(i);
            //cout<<"data.size()="<<data.size();
        }
        i=i+2;
    }
}
int main() {
    store();
    int t,i,n;
    //for(i=0;i<data.size();i++)cout<<data[i]<<" ";
    cin>>t;
    while(t--){
        cin>>n;
        cout<<data[n-1]<<"\n";
    }
	return 0;
}
