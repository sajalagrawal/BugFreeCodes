//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1329
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
void reverse(int a[],int i,int j);
void swap(int *a,int *b);
int main()
 {
	int t,n,i,k,j,temp;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],m=0;
	    for(i=0;i<n;i++)cin>>a[i];
	    cin>>k;
	    i=0;
	    while((i+k)<=n){
	        reverse(a,i,i+k-1);
	        m++;
	        i=m*k;
	    }
	    if((i+k)>n){
	        j=n-1;
	        while(i<=j){
	            swap(&a[i],&a[j]);
                i++;
                j--;
	        }
	    }
	    for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}

void reverse(int a[],int i,int j){
    int temp;
    while(i<=j){
        swap(&a[i],&a[j]);
        i++;
        j--;
    }
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
