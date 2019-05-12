//Author- Sajal Agrawal
//sajal.agrawal1997@gmail.com

//same logic can be found here- https://stackoverflow.com/questions/3252667/how-to-calculate-difference-between-two-sets-in-c

#include <iostream>
using namespace std;
void solve(int m,int a[],int n,int b[]){
    //A-B
    int i=0,j=0,k=0;
    while(k<m){
        if(i==m)goto end;
        if(j==n or a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;k++;
        }
        if(a[i]==b[j]){
            i++;j++;
        }
        if(a[i]>b[j]){
            j++;
        }
    }
    end:
    if(k==0)cout<<"none\n";
    return;
}
int main() {
	// your code goes here
	int i,m,n;
	cin>>m>>n;
	int a[m],b[n];
	for(i=0;i<m;i++)cin>>a[i];
	for(i=0;i<n;i++)cin>>b[i];
	solve(m,a,n,b);
	return 0;
}
