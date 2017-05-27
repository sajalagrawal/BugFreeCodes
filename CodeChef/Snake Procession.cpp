//https://www.codechef.com/SNCKQL17/problems/SNAKPROC/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
    int t,n;
    cin>>t;
    string str;
    while(t--){
        cin>>n;
        int head=0,tail=0,flag=0,i;
        cin>>str;
        for(i=0;i<n;i++){
            if(str[i]=='H')head++;
            if(str[i]=='T' and head!=1){
                flag=1;
                break;
            }
            if(str[i]=='T' and head==1){
                head=0;
            }
        }
        if(head!=0)flag=1;
        if(flag==1)cout<<"Invalid\n";
        else cout<<"Valid\n";
    }
    
	return 0;
}
 
 