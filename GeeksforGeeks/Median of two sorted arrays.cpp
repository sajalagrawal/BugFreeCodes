//http://www.geeksforgeeks.org/median-of-two-sorted-arrays/
//Time Complexity: O(logn)

#include <iostream>
using namespace std;
int median(int a[],int n){
    if(n%2==0){
        return (a[n/2]+a[n/2-1])/2;
    }
    return a[n/2];
}
int getMedian(int a[],int b[],int n){
    if(n<=0)return -1;
    if(n==1)return (a[0]+b[0])/2;
    if(n==2){
        return (max(a[0],b[0])+min(a[1],b[1]))/2;
    }
    int m1=median(a,n);
    //cout<<"m1="<<m1<<"\n";
    int m2=median(b,n);
    //cout<<"m2="<<m2<<"\n";
    if(m1==m2){
        return m1;
    }
    if(m1>m2){
        if(n%2==0)return getMedian(a,b+n/2-1,n/2+1);
        return getMedian(a,b+n/2-1,n/2+1);
    }
    //if m1<m2
    if(n%2==0)return getMedian(a+n/2-1,b,n/2+1);
    return getMedian(a+n/2,b,n/2+1);
}

int main()
{
    int a[] = {1,2,3,6};
    int b[] = {4,6,8,10};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    if(n1==n2){
        cout<<"Median is: "<<getMedian(a,b,n1)<<"\n";
    }else{
        cout<<"Doesnt work for arrays of unequal size.\n";
    }
    return 0;
}
