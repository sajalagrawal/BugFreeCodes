//http://www.practice.geeksforgeeks.org/problem-page.php?pid=558
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,i,j;
    cin>>t;
    while(t--){
        cin>>n;
        int count=0;
        int a[n];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j])count++;
            }
        }
        cout<<count<<"\n";
    }
	return 0;
}
