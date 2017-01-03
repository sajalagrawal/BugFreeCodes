//https://www.codechef.com/ZCOPRAC/problems/ZCO13001
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    long long n,i,sum=0;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++){
        sum+=(a[i]*i)-(a[i]*(n-i-1));
    }
    cout<<sum<<"\n";
	return 0;
}
