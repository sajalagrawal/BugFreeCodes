//https://www.codechef.com/problems/HEADBOB
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
using namespace std;

int main()
{
    int t,n,i;
    char a[1005];
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]=='I'){
                cout<<"INDIAN\n";
                break;
            }
            else if(a[i]=='Y'){
                cout<<"NOT INDIAN\n";
                break;
            }
 
            else if(i==n-1 && a[i]=='N'){
                cout<<"NOT SURE\n";
                break;
            }
 
 
        }
    }
    return 0;
}
