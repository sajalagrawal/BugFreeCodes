//https://www.codechef.com/problems/RESERVOI
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 char a[1005][1005];
bool isStable(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            switch(a[i][j]){
                case 'W':if(j==0 or j==m-1){//cout<<"1";
                            return false;}
                         else if(a[i][j-1]=='A' or a[i][j+1]=='A'){//cout<<"2";
                            return false;}
                         break;
                case 'B':if(i!=n-1 and a[i+1][j]!='B'){//cout<<"3";
                            return false;}
                        break;
            }
        }
    }
    return true;
}
int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++)cin>>a[i][j];
	    }
	    if(isStable(n,m))cout<<"yes\n";
	    else cout<<"no\n";
	}
	return 0;
}
