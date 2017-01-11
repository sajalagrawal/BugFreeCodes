/* PARTIALLY ACCEPTED */

//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monk-and-special-integer-code-monk/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main()
{
    int n,r,i;
    long long x; 
    cin>>n>>x;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    long long res=0;
    long long sum=0,count=0;
    for(int r=1;r<=n;r++){
        count=0;
        for(int i=0,j=i+r-1;j<=n-1;i++,j++){
    	    sum=0;
    		for(int k=i;k<=j;k++){
    			sum+=a[k];
    		}
    		if(sum<=x)count++;;
    		if(sum>x)break;
	    }
		if(count==n+1-r)res++;
		if(count==0)break;
    }
	cout<<res<<"\n";
    return 0;
}
