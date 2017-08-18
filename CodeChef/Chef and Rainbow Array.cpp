//https://www.codechef.com/AUG17/problems/RAINBOWA
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main() {
    int t,i,n;
    cin>>t;
    while(t--){
        cin>>n;
        //cout<<"n="<<n<<endl;
        int a[n],flag=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=8)flag=1;
        }
        int mid=n/2;
        if(a[mid]!=7){
            //cout<<"here";
            flag=1;
        }
        int l=mid-1,r=mid+1,it=7;
        if(n%2==0)r=mid;
        while(l>=0 and r<=n-1){
            //cout<<"l="<<l<<endl;
            if(a[l]!=a[r] or !(a[l]==it or a[l]==it-1)){
                //cout<<"l="<<l<<endl;
                flag=1;
                break;
            }else if(a[l]==a[r] and (a[l]==it or a[l]==it-1)){
                if(a[l]==it-1)it-=1;
                l--;r++;
            }
        }
        if(l!=-1 or r!=n)flag=1;
        if(flag==1)cout<<"no\n";
        else cout<<"yes\n";
    }
	return 0;
}
