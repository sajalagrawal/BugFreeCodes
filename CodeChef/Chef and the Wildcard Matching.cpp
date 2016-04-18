//https://www.codechef.com/problems/TWOSTR
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<string.h>
using namespace std;
 
int main()
{
    int t,i=0,flag;
    char x[20],y[20];
    cin>>t;
    while(t--){
        cin>>x;
        cin>>y;
        flag=1;
        for(i=0;i<strlen(x);i++){
            if(x[i]!='?' && y[i]!='?'){
                    if(x[i]!=y[i]){
                        cout<<"No\n";
                        flag=0;
                        break;
                    }
            }
        }
        if(flag==1){
            cout<<"Yes\n";
        }
    }
    return 0;
}
