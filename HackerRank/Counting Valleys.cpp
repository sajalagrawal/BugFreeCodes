//https://www.hackerrank.com/challenges/counting-valleys/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,i,low=0,high=0,flag=0,count=0;
    cin>>n;
    string str;
    cin>>str;
    for(i=0;i<n;i++){
        if(str[i]=='U'){
            high++;
            if(flag==0 ){
                flag=1;
            }
        }
        if(str[i]=='D'){
            low++;
            if(flag==0)flag=-1;
        }
        if(low==high){
            if(flag==-1)count++;
            flag=0;
        }
    }
    cout<<count<<"\n";
	return 0;
}
