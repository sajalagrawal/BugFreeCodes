//https://www.codechef.com/problems/AMSGAME1
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b);
int main() {
    int t,i,res,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        res=a[0];
        for(i=1;i<n;i++){
            res=gcd(a[i],res);
        }
        cout<<res<<"\n";
    }
	return 0;
}
 
int gcd(int a,int b){
    int r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
} 
