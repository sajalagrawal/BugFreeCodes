//http://www.practice.geeksforgeeks.org/problem-page.php?pid=1308
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
using namespace std;
int main()
 {
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],prod=1;
        for(i=0;i<n;i++){
            cin>>a[i];
            prod*=a[i];
        }
        cout<<prod<<"\n";
    }
	return 0;
}
