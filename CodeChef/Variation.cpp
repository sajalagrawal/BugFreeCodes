//https://www.codechef.com/ZCOPRAC/problems/ZCO15002
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long long int n,k,res=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	//for(int i=0;i<n;i++)cout<<a[i]<<" ";
	//cout<<"\n";
	for(int i=0;i<n-1;i++){
	    int left=i;
	    int right=i+1;
	    while(right<=n-1){
	        if((a[right]-a[left])>=k){
	            res+=n-right;
	            break;
	        }else{
	            right++;
	        }
	    }
	}
	cout<<res<<"\n";
	return 0;
}
