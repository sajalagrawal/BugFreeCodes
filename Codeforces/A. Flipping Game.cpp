//http://codeforces.com/contest/327/problem/A
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
//similar to http://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int n,i,maxsum=INT_MIN,cursum=0,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++){
        if(a[i]==1)cursum+=-1;
        else cursum+=1;
        if(cursum>maxsum)maxsum=cursum;
        if(cursum<0)cursum=0;
    }
    for(i=0;i<n;i++){
        if(a[i]==1)sum++;
    }
    cout<<(sum+maxsum)<<endl;
	return 0;
}
