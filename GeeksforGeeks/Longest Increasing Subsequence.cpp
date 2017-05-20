//http://www.geeksforgeeks.org/dynamic-programming-set-3-longest-increasing-subsequence/
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main() {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int dp[n];
    for(i=0;i<n;i++)dp[i]=1;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]>a[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int max=dp[0];
    for(i=0;i<n;i++)cout<<dp[i]<<" ";
    cout<<"\n";
    for(i=1;i<n;i++){
        if(dp[i]>max)max=dp[i];
    }
    cout<<max<<"\n";
	return 0;
}
