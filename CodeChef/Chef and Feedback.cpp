//https://www.codechef.com/problems/ERROR
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,i,flag;
    cin>>t;
    char str[100000];
    while(t--){
        cin>>str;
        i=0;
        flag=0;
        while(str[i]!='\0'){
            if(str[i]=='1'){
                if(str[i+1]=='0'){
                    if(str[i+2]=='1'){
                        cout<<"Good\n";
                        flag=1;
                        break;
                    }
                }
            }
 
            if(str[i]=='0'){
                if(str[i+1]=='1'){
                    if(str[i+2]=='0'){
                        cout<<"Good\n";
                        flag=1;
                        break;
                    }
                }
            }
            i++;
        }
        if(flag==0)
            cout<<"Bad\n";
 
    }
    return 0;
}
