//https://www.hackerrank.com/contests/projecteuler/challenges/euler038
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define pb push_back

string num="";
int checkHash(string num,int k){
    int hash[10]={0},i;
    for(i=0;i<num.size();i++){
        hash[num[i]-'0']++;
    }
    if(hash[0]>0)return 2;
    for(i=1;i<=9;i++){
        if(hash[i]>1)return 2;
    }
    if(k==8 and hash[9]>=1)return 2;
    int flag=0;
    for(i=1;i<=8;i++){
        if(hash[i]!=1){
            flag=1;
            break;
        }
    }
    if(k==9 and hash[9]!=1)flag=1;
    if(flag==0)return 1;
    return 3;
}
bool multiplier(int n,int k){
    num="";
    int i;
    for(i=1;;i++){
        num+=to_string(i*n);
        if(num.size()>=10)return false;
        if(checkHash(num,k)==1){
            //all k digits appear once
            //cout<<"num="<<num<<endl;
            return true;
        }
        if(checkHash(num,k)==2){
            //if duplicates appear or
            //if k=8 and 9 appears in the hash or
            //0 appears in hash
            return false;
        }
        if(checkHash(num,k)==3){
            continue;
        }
    }
}

int main() {
    int n,k,i;
    cin>>n>>k;
    
    for(i=2;i<n;i++){
        if(multiplier(i,k))cout<<i<<"\n";
    }
	return 0;
}
