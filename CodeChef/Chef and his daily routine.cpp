//https://www.codechef.com/MAY17/problems/CHEFROUT/
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
using namespace std;
 
int main() {
    int t,i;
    string str;
    cin>>t;
    while(t--){
        int c=0,e=0,s=0;
        cin>>str;
        for(i=0;i<str.size();i++){
            if(str[i]=='C' and (s==1 or e==1)){
                cout<<"no\n";
                break;
            }
            if(str[i]=='C')c=1;
            if(str[i]=='E' and (s==1)){
                cout<<"no\n"; 
                break;
            }
            if(str[i]=='E'){
                e=1;
                //c=0;
            }
            if(str[i]=='S')s=1;
        }
        if(i==str.size())cout<<"yes\n";
    }
	return 0;
}