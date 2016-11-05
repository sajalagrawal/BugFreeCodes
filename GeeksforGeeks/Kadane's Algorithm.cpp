//http://www.practice.geeksforgeeks.org/problem-page.php?pid=106
//Author- Sajal Agrawal
//Username:sajalagrawal

#include <iostream>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],allneg=1,max_so_far=0,max_end_here=0;
	    for(i=0;i<n;i++)cin>>a[i];
	    int max=a[0];
	    for(i=0;i<n;i++){
	        if(a[i]>0){
	            allneg=0;
	            break;
	        }
	    }
	    if(allneg==1){    //all negative==true
	        for(i=1;i<n;i++){
	            if(a[i]>max)max=a[i];
	        }
	        cout<<max<<"\n";
	    }
	    else{  //all negative==false
	        for(i=0;i<n;i++){
	            max_end_here+=a[i];
	            if(max_end_here<0)max_end_here=0;
	            if(max_end_here>max_so_far)max_so_far=max_end_here;
	        }
	        cout<<max_so_far<<"\n";
	    }
	}
	return 0;
}
