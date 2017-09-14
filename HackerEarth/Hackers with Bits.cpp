//https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/hack-the-string-9dce7834/
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

int count(int a[],int n){
    int i,ones=0,ans=0;
    for(i=0;i<n;i++){
        if(a[i]==1)ones++;
        else ones=0;
        ans=max(ans,ones);
    }
    return ans;
}
int main() {
    int n,i,j,ans=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    ans=max(ans,count(a,n));
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            swap(a[i],a[j]);
            ans=max(ans,count(a,n));
            swap(a[i],a[j]);
        }
    }
    cout<<ans<<"\n";
	return 0;
}
