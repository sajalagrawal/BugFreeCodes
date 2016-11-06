//http://www.practice.geeksforgeeks.org/problem-page.php?pid=347
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
#include<algorithm>
using namespace std;
int countPairsWithDiffK(int a[],int n,int k);
int main() {
	int t,n,i,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
	    cout<<countPairsWithDiffK(a,n,k)<<"\n";
	}
	return 0;
}

int countPairsWithDiffK(int a[],int n,int k){
    int i=0,j=0,count=0,flagI=0,flagJ=0;
    while(j<n){
        if((a[j]-a[i])==k){
            //cout<<"i="<<i<<" j="<<j<<" a[i]="<<a[i]<<" a[j]="<<a[j]<<"\n";
            count++;
            flagI=flagJ=0;
            while((i+1)<n && a[i+1]==a[i]){
               // cout<<"i="<<i<<" j="<<j<<" a[i]="<<a[i]<<" a[j]="<<a[j]<<"\n";
                count++;
                i++;
                flagI=1;
            }
            while((j+1<n) && a[j]==a[j+1]){
                // cout<<"i="<<i<<" j="<<j<<" a[i]="<<a[i]<<" a[j]="<<a[j]<<"\n";
                count++;
                j++;
                flagJ=1;
            }
            if(!flagI)i++;
            if(!flagJ)j++;
        }
        else if((a[j]-a[i])>k)i++;
        else j++;
    }
    return count;
}
