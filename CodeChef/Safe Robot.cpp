//https://www.codechef.com/problems/ROBOTG
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com
//Sample Test Case n=9 m=2 string=LURDDR

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,i,j,k,flag;
	string str;
	cin>>t;
	while(t--){
	    cin>>n>>m>>str;
	    for(i=1;i<=n;i++){
	        for(j=1;j<=m;j++){
	            flag=1;
	            int x=j,y=i;
	            for(k=0;k<str.size();k++){
	                if(str[k]=='L')x--;
	                else if(str[k]=='R')x++;
	                else if(str[k]=='U')y--;
	                else if(str[k]=='D')y++;
	                if(x==0 or x>m or y==0 or y>n){
	                    flag=0;
	                    break;
	                }
	            }
	            if(flag==1){
	                cout<<"safe\n";
	                goto label;
	            }
	        }
	    }
	    if(flag==0)cout<<"unsafe\n";
	    label:;
	}
	return 0;
}
