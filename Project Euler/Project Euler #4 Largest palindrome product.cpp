//https://www.hackerrank.com/contests/projecteuler/challenges/euler004
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
int data[810000],k=0;
bool isPalindrome(int n){
    char buffer[10];
    //itoa(n,buffer,10);
    snprintf(buffer, sizeof(buffer), "%d", n);
    int size=strlen(buffer);
    //cout<<"n="<<n<<"size="<<size<<endl;
    int i,j;
    for(i=0,j=size-1;i<=j;i++,j--){
        if(buffer[i]!=buffer[j])return false;
    }
    return true;
}
void storePalindromes(){
    int i,j;
    for(i=101;i<=999;i++){
        for(j=101;j<=999;j++){
            if(isPalindrome(i*j)){
                data[k++]=i*j;
            }
        }
    }
}
int main() {
    int t,n;
    cin>>t;
    storePalindromes();
    sort(data,data+k);
    //for(int i=0;i<k;i++)cout<<data[i]<<" ";
    //cout<<endl;
    while(t--){
        cin>>n;
        cout<<data[(lower_bound(data,data+k,n)-1)-data]<<"\n";
    }
	return 0;
}
