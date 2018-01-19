//https://www.hackerrank.com/contests/codeblitz3/challenges/cooking-contest
//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com
#include <bits/stdc++.h>
using namespace std;
#define  ll long long
int main() {
    ll k,i,j,t1,t2;
    cin>>k;
    //cout<<"k="<<k<<endl;
    ll a[k];
    for(i=0;i<k;i++)cin>>a[i];
    ll l=2,r=2;
    for(i=k-1;i>=0;i--){
        //cout<<"l="<<l<<" r="<<r<<" a[]="<<a[i]<<endl;
        if(l%a[i]==0 or r%a[i]==0 or (l/a[i]!=r/a[i])){
        	if(l%a[i]==0){
            	
            }else{
            	l=(l/a[i] + 1)*a[i];
            	//cout<<"l="<<l<<endl;
            }
            if(r%a[i]==0){
            	r=r+a[i]-1;
            }else{
            	r=(r/a[i])*(a[i])+a[i]-1;
            	//cout<<"r="<<r<<endl;
            }
        }else{
            printf("-1\n");
            return 0;
        }
        //cout<<"l="<<l<<" r="<<r<<endl;
    }
    printf("%lld %lld\n",l,r);
	return 0;
}

/*
5
2 6 4 3 2
ans=6 11
*/