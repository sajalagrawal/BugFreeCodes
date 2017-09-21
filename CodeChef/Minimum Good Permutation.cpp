//https://www.codechef.com/SEPT17/problems/MINPERM
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=1;i<=n;i++)a[i-1]=i;
        for(i=0;i<n-1;i++){
            if(a[i]==i+1)swap(&a[i],&a[i+1]);
        }
        if(a[n-1]==n)swap(&a[n-1],&a[n-2]);
        for(i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<"\n";
    }
	return 0;
}
