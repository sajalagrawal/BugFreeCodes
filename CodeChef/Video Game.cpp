//https://www.codechef.com/ZCOPRAC/problems/ZCO14001
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;

int main() {
	long long int n,h;
	cin>>n>>h;
	long long int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int ins=-1,crane=0; //0 for no box on crane;
	int pos=0;
	while(ins!=0){
	    cin>>ins;
	    if(ins==1 && pos>0){
	        pos--;
	    }else if(ins==2 && pos<n-1){
	        pos++;
	    }else if(ins==3 && crane==0 && a[pos]>0){
	        crane=1;
	        a[pos]--;
	    }else if(ins==4 && crane==1 && a[pos]<h){
	        crane=0;
	        a[pos]++;
	    }
	}
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	cout<<"\n";
	return 0;
}
