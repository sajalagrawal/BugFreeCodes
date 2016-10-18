//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1330
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;
int maxValue(int a[],int n);
int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    cout<<maxValue(a,n)<<"\n";
	}
	return 0;
}

int maxValue(int a[],int n){
    int max=(a[0]-0)-(a[1]-1),i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                if((a[i]-i)-(a[j]-j)>max)max=(a[i]-i)-(a[j]-j);
                else if((a[j]-j)-(a[i]-i)>max)max=(a[j]-j)-(a[i]-i);
            }
        }
    }
    return max;
}
