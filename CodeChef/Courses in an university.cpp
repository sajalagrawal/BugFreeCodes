//https://www.codechef.com/MAY17/problems/UNICOURS/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],max=INT_MIN;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max)max=a[i];
        }
        cout<<(n-max)<<endl;
    }
	return 0;
}
 