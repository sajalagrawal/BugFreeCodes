//http://www.practice.geeksforgeeks.org/problem-page.php?pid=831
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

bool check(int n);
int main() {
	int t,n,sum,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    sum=0;
	    for(i=1;i<=n;i++){
	        if(check(i))sum++;
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}

bool check(int n){
    while(n){
        if(n%10==0 ||n%10==6 ||n%10==7 ||n%10==8 ||n%10==9){
            return false;
        }
        n=n/10;
    } 
    return true;
}
