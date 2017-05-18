//https://www.codechef.com/MAY17/problems/MXMEDIAN/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <bits/stdc++.h>
using namespace std;
void swap(int* a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int size=2*n;
        int a[size],c[size];
        for(i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+size);
        int k=0,z=size-1;
        for(i=0;i<size-1;i=i+2){
            c[i]=a[k++];
            c[i+1]=a[z--];
        }
        //bool flag=true;
        int b[n],j=0;
        for(i=0;i<size-1;i=i+2){
            b[j++]=max(c[i],c[i+1]);
        }
        sort(b,b+n);
        cout<<b[n/2]<<endl;
        for(i=0;i<size;i++)cout<<c[i]<<" ";
        cout<<endl;
    }
	return 0;
}