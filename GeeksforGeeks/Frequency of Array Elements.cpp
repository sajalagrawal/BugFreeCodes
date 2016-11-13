//http://www.practice.geeksforgeeks.org/problem-page.php?pid=84
//Author- Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include<iostream>
#include<map>
using namespace std;
int main()
 {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    map<int,int> freq;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        freq[a[i]]++;
	    }
	    for(i=1;i<=n;i++){
	        freq[i]?cout<<freq[i]:cout<<"0";
	        cout<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
