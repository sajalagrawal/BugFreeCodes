//https://www.codechef.com/problems/LEXOPAL
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,flag,i,j;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        flag=1;
        for(i=0,j=str.size()-1;i<=str.size()/2;i++,j--){
            if(str[i]=='.' && str[j]=='.'){
                str[i]=str[j]='a';
            }
            if((str[i]!='.' && str[j]=='.') || (str[i]=='.' && str[j]!='.')){
                if(str[i]=='.'){
                    str[i]=str[j];
                }else{
                    str[j]=str[i];
                }
            }else if(str[i]=='.' &&((str.size()%2==0 && i==(str.size()/2-1)) || (str.size()%2==1 && i==str.size()/2))){
                str[i]='a';
            }else if(str[i]!=str[j]){
                cout<<"-1\n";
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<str<<"\n";
    }
    return 0;
}
 
