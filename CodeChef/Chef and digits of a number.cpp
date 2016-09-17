//https://www.codechef.com/problems/LONGSEQ
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
 
using namespace std;
 
int main()
{
    int t,i,k=0;
    string ar[50];
    cin>>t;
    while(t--){
        string str;
        int one=0,zero=0;
        cin>>str;
        for(i=0;i<str.size();i++){
            if(str[i]=='0')
                zero++;
            else if(str[i]=='1')
                one++;
        }
        if(one==1  || zero==1){
            ar[k]="Yes";
            k++;
        }
        else{
            ar[k]="No";
            k++;
        }
    }
    for(i=0;i<k;i++){
        cout<<ar[i]<<"\n";
    }
    return 0;
}
