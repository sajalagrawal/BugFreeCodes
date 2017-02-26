//https://www.codechef.com/problems/CRES02
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<limits.h>
using namespace std;
void update(long long ar[],int a,int b){
    ar[a-1]=b;
}
long long sum(long long ar[],int a,int b){
    long long sum=0;
    for(int i=a-1;i<=b-1;i++){
        sum+=ar[i];
    }
    return sum;
}
long long maximum(long long ar[],int a,int b){
    long long m=LONG_MIN;
    for(int i=a-1;i<=b-1;i++){
        if(ar[i]>m)m=ar[i];
    }
    return m;
}
long long minimum(long long ar[],int a,int b){
    long long m=LONG_MAX;
    for(int i=a-1;i<=b-1;i++){
        if(ar[i]<m)m=ar[i];
    }
    return m;
}
long long Smax(long long ar[],int a,int b){
    long long m=LONG_MIN,s=LONG_MIN;  
    for(int i=a-1;i<=b-1;i++){
        if(ar[i]>m){
            s=m;
            m=ar[i];
        }
        else if(ar[i]>s and ar[i]<=m)s=ar[i];
    }
    return s;
}
long long Smin(long long ar[],int a,int b){
    long long m=LONG_MAX,s=LONG_MAX;
    for(int i=a-1;i<=b-1;i++){
        if(ar[i]<m){
            s=m;
            m=ar[i];
        }
        else if(ar[i]<s and ar[i]>=m)s=ar[i];
    }
    return s;
}
int main() {
	// your code goes here
	int n,k,a,b;
	cin>>n;
	char ch;
	long long ar[n];
	for(int i=0;i<n;i++)cin>>ar[i];
	cin>>k;
	while(k--){
	    cin>>ch;
	    cin>>a>>b;
	    if(ch=='U' && a<1)cout<<"NA\n";
	    else if(ch!='U' && (a<1 || b>n || a>b))cout<<"NA\n";
	    else
	    switch(ch){
	        case 'U':update(ar,a,b);
	                break;
	        case 'A':cout<<sum(ar,a,b)<<"\n";
	                break;
	        case 'M':cout<<maximum(ar,a,b)<<"\n";
	                break;
	        case 'm':cout<<minimum(ar,a,b)<<"\n";
	                break;
	        case 'S':cout<<Smax(ar,a,b)<<"\n";
	                break;
	        case 's':cout<<Smin(ar,a,b)<<"\n";
	                break;
	        default:cout<<"!!!\n";
	    }
	}
	return 0;
}
