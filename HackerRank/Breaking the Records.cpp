//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,i,low,high,clow=0,chigh=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    low=high=a[0];
    for(i=1;i<n;i++){
        if(a[i]>high){
            high=a[i];
            chigh++;
        }
        if(a[i]<low){
            low=a[i];
            clow++;
        }
    }
    cout<<chigh<<" "<<clow<<"\n";
	return 0;
}
