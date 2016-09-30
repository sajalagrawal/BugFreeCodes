//https://www.hackerrank.com/challenges/manasa-and-stones
//Author - Sajal Agrawal
//sajal.agrawal1997@gmail.com

#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,a,b,j;
    cin>>t;
    while(t--){            
        cin>>n>>a>>b;
        int res=0;
        for(j=0;j<=n-1;j++){
            if(a==b){
                res=a*(n-1);
                cout<<res<<" ";
                break;
            }
            else if(a>b){
                res=a*j+b*(n-1-j);
                cout<<res<<" ";
            }
            else{
                res=b*j+a*(n-1-j);
                cout<<res<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
