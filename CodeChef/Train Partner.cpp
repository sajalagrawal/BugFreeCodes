//https://www.codechef.com/problems/ANKTRAIN
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n%8==1){
	        cout<<(n+3)<<"LB\n";
	    }else if(n%8==2){
	        cout<<(n+3)<<"MB\n";
	    }else if(n%8==3){
	        cout<<(n+3)<<"UB\n";
	    }else if(n%8==7){
	        cout<<(n+1)<<"SU\n";
	    }else if(n%8==6){
	        cout<<(n-3)<<"UB\n";
	    }else if(n%8==5){
	        cout<<(n-3)<<"MB\n";
	    }else if(n%8==4){
	        cout<<(n-3)<<"LB\n";
	    }else{
	        cout<<(n-1)<<"SL\n";
	    }
	}
	return 0;
}
