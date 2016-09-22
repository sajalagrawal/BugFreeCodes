//https://www.hackerearth.com/invento-2k16/algorithm/392ff46611764408bcfdfeb324db7d35/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
 
using namespace std;
void anticlockwise(int a[],int n);
void clockwise(int a[],int n);
int main()
{
    int n,q,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    //cout<<a[0];
    cin>>q;
    int op[q];
    for(i=0;i<q;i++){
        cin>>op[i];
    }
    for(i=0;i<q;i++){
        if(op[i]==1){
            anticlockwise(a,n);
        }else if(op[i]==2){
            clockwise(a,n);
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
 
void anticlockwise(int a[],int n){
    int i,temp;
    temp=a[0];
    for(i=0;i<=n-2;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
 
void clockwise(int a[],int n){
    int i,temp;
    temp=a[n-1];
    for(i=n-1;i>=1;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;
}
