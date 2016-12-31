//http://www.practice.geeksforgeeks.org/problem-page.php?pid=577
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int count(int a[],int k,int n);
int first(int a[],int k,int l,int r);
int second(int a[],int k,int l,int r);
int main()
 {
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<count(a,k,n)<<"\n";
    }
	return 0;
}

int first(int a[],int k,int l,int r){
    while(l<=r){
        int mid=(l+r)/2;
        //cout<<"mid="<<mid<<"\n";
        if((mid==0 || a[mid-1]<k) && a[mid]==k )return mid;
        else if(a[mid]<k)
            return first(a,k,mid+1,r);
        else       //if ((a[mid]==k && a[mid-1]==k)) || (a[mid]>k)
            return first(a,k,l,mid-1);
    }
    return -1;
}

int second(int a[],int k,int n,int l,int r){
    while(l<=r){
        int mid=(l+r)/2;
        if((mid==n-1 || a[mid+1]>k) && a[mid]==k)return mid;
        else if(a[mid]>k)
            return second(a,k,n,l,mid-1);
        else  //if (a[mid]==k && a[mid+1]==k) || a[mid]<k
            return second(a,k,n,mid+1,r);
    }
    return -1;
}

int count(int a[],int k,int n){
    int i,j;
    i=first(a,k,0,n-1);
    //cout<<"i="<<i<<"\n";
    if(i==-1)return i;
    j=second(a,k,n,i,n-1);
    //cout<<"j="<<j<<"\n";
    return (j-i+1);
}
