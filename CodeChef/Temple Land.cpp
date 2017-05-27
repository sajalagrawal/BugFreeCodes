//https://www.codechef.com/SNCKQL17/problems/TEMPLELA
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int flag=0;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        if(n%2==0 or a[0]!=1 or a[n-1]!=1 or a[n/2]!=(n+1)/2){
            flag=1;
            goto ans;
        }else{
            int mid=a[n/2];
            for(i=1;i<=n/2;i++){
                if(a[i]!=i+1){
                    flag=1;
                    goto ans;
                }
            }
            for(i=n/2+1;i<n;i++){
                if(a[i]!=mid-1){
                    flag=1;
                    goto ans;
                }
                mid--;
            }
        }
        ans:
        if(flag==1)cout<<"no\n";
        else cout<<"yes\n";
    }
	return 0;
}