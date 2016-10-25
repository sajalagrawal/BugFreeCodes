//http://www.practice.geeksforgeeks.org/problem-page.php?pid=506
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;
void rev(int c[],int len);
int main() {
	int t,m,n,k,i,j,add;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    int a[m],b[n],c[1001];
	    for(i=0;i<m;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];
        int carry=0,k=0;
        for(i=m-1,j=n-1;i>=0,j>=0;i--,j--){
            add=a[i]+b[j]+carry;
            carry=add/10;
            if(add>=10){
                add=add%10;
            }
            c[k++]=add;
        }
        if(m>n){
            for(;i>=0;i--){
                add=a[i]+carry;
                carry=add/10;
                if(add>=10){
                    add=add%10;
                }
                c[k++]=add;
                
            }
        }else if(n>m){
            for(;j>=0;j--){
                add=b[j]+carry;
                carry=add/10;
                if(add>=10){
                    add=add%10;
                }
                c[k++]=add;
            }
        }
        if(carry){
            c[k++]=carry;
        }
        rev(c,k);
        for(i=0;i<k;i++)cout<<c[i]<<" ";
        cout<<"\n";
	}
	return 0;
}

void rev(int a[],int len){
    int temp,i,j;
    for(i=0,j=len-1;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
